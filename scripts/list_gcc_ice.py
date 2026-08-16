#!/usr/bin/env python3

import argparse
import pathlib
import re
import shlex
import shutil
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
DEFAULT_CASES_DIR = ROOT / "experimental" / "gcc"

STRIP_OPTIONS = {
    "-Xanalyzer",
    "-analyzer-output=text",
    "-fexperimental-new-constant-interpreter",
}

OPTION_REPLACEMENTS = {
    "--analyze": "-fanalyzer",
}

GXX = shutil.which("g++")
if GXX is None:
    print("g++ not found")
    sys.exit(1)


def extract_run_line(path: pathlib.Path) -> str:
    with open(path, "r", encoding="utf-8") as f:
        for line in f:
            if line.startswith("// RUN:"):
                return line[len("// RUN:"):].strip()

    raise RuntimeError(f"RUN line not found: {path}")


def build_gcc_command(run_line: str, source_path: pathlib.Path):
    relative_path = source_path.relative_to(ROOT)

    cmd = run_line.replace("clang++", GXX)
    cmd = cmd.replace("%s", shlex.quote(str(relative_path)))

    args = shlex.split(cmd)

    analyze = "--analyze" in args

    args = [arg for arg in args if arg not in STRIP_OPTIONS]
    args = [OPTION_REPLACEMENTS.get(arg, arg) for arg in args]

    if analyze and "-c" not in args:
        args.insert(1, "-c")

    if "-o" not in args:
        args += ["-o", "/dev/null"]

    return args


def extract_ice_messages(output: str) -> set[str]:
    messages = set()

    for line in output.splitlines():
        match = re.search(r"internal compiler error:.*", line)
        if not match:
            continue

        message = match.group(0)

        message = re.sub(r":\d+$", "", message)

        messages.add(message)

    return messages


def run_one(path: pathlib.Path) -> set[str]:
    run_line = extract_run_line(path)
    cmd = build_gcc_command(run_line, path)

    proc = subprocess.run(
        cmd,
        cwd=ROOT,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )

    output = proc.stdout + proc.stderr
    return extract_ice_messages(output)


def collect_files(args):
    if args.files:
        return [pathlib.Path(f).resolve() for f in args.files]

    cases_dir = pathlib.Path(args.cases_dir).resolve()
    return sorted(cases_dir.glob("*.cpp"))


def parse_args():
    parser = argparse.ArgumentParser()

    parser.add_argument(
        "files",
        nargs="*",
        help="Specific test files to run",
    )

    parser.add_argument(
        "--cases-dir",
        default=str(DEFAULT_CASES_DIR),
        help=f"Directory containing test cases (default: {DEFAULT_CASES_DIR})",
    )

    return parser.parse_args()


def main():
    args = parse_args()

    files = collect_files(args)

    if not files:
        print("No cpp files found")
        sys.exit(1)

    ice_messages = set()

    for path in files:
        ice_messages.update(run_one(path))

    for message in sorted(ice_messages):
        print(message)


if __name__ == "__main__":
    main()
