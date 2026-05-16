#!/usr/bin/env python3

import argparse
import pathlib
import shlex
import shutil
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
DEFAULT_CASES_DIR = ROOT / "experimental" / "gcc"

ICE_PATTERN = "internal compiler error:"

STRIP_OPTIONS = {
    "-fexperimental-new-constant-interpreter",
}

GXX = shutil.which("g++")
if GXX is None:
    print("g++ not found")
    sys.exit(1)


def get_gxx_version() -> str:
    proc = subprocess.run(
        [GXX, "--version"],
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )

    return proc.stdout.splitlines()[0]


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

    args = [arg for arg in args if arg not in STRIP_OPTIONS]

    if "-o" not in args:
        args += ["-o", "/dev/null"]

    return args


def run_one(path: pathlib.Path, verbose: bool) -> bool:
    run_line = extract_run_line(path)
    cmd = build_gcc_command(run_line, path)

    if verbose:
        print(f"[RUN] {' '.join(cmd)}")

    proc = subprocess.run(
        cmd,
        cwd=ROOT,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )

    output = proc.stdout + proc.stderr

    crashed = ICE_PATTERN in output

    if verbose:
        if crashed:
            print("[ICE] GCC internal compiler error detected")
        else:
            print("[NOT ICE] GCC internal compiler error not detected")

    return crashed


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

    ice = 0
    not_ice = 0

    multi = len(files) > 1

    for path in files:
        crashed = run_one(path, verbose=not multi)

        if crashed:
            ice += 1
            status = "ICE"
        else:
            not_ice += 1
            status = "NOT ICE"

        if multi:
            print(f"{path.name} {status}")

    if multi:
        print("\n=== Summary ===")
        print(f"GCC version: {get_gxx_version()}")
        print(f"Total: {len(files)}")
        print(f"ICE: {ice}")
        print(f"NOT ICE: {not_ice}")


if __name__ == "__main__":
    main()
