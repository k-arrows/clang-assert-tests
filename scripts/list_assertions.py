#!/usr/bin/env python3
import subprocess
import pathlib
import re
import argparse
from collections import defaultdict

# Match lines like: // RUN: ...
RUN_RE = re.compile(r"^\s*//\s*RUN:\s*(.*)$")

# Match assertion failures like: Assertion `...' failed.
ASSERT_RE = re.compile(r"(Assertion `.*?' failed\.)")


def extract_run_lines(file_path):
    """Extract RUN lines from a test file."""
    runs = []
    with open(file_path, encoding="utf-8", errors="ignore") as f:
        for line in f:
            m = RUN_RE.match(line)
            if m:
                runs.append(m.group(1).strip())
    return runs


def substitute(cmd: str, file_path: pathlib.Path) -> str:
    """
    Substitute minimal placeholders used in RUN lines.
    """
    file_str = str(file_path)
    cmd = cmd.replace("%s", file_str)
    return cmd


def ensure_no_output(cmd: str) -> str:
    """
    If -c is used but no output file is specified,
    redirect output to /dev/null (check.py style safety).
    """
    if "-c" in cmd and "-o" not in cmd:
        cmd += " -o /dev/null"
    return cmd


def run_cmd(cmd):
    """Execute a command and return stderr output."""
    try:
        proc = subprocess.run(
            cmd,
            shell=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            timeout=5,
        )
        return proc.stderr.decode("utf-8", errors="ignore")
    except subprocess.TimeoutExpired:
        return ""


def extract_assertion(stderr):
    """Extract the first assertion message from stderr."""
    for line in stderr.splitlines():
        m = ASSERT_RE.search(line)
        if m:
            return m.group(1)
    return None


def get_clang_version():
    """Get clang version string."""
    try:
        proc = subprocess.run(
            ["clang++", "--version"],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
        )
        return proc.stdout.decode("utf-8", errors="ignore").splitlines()[0]
    except Exception:
        return "clang version: unknown"


def main():
    parser = argparse.ArgumentParser(description="List assertion failures")
    parser.add_argument(
        "--assertions-only",
        action="store_true",
        help="Show only assertion messages (no file paths, no summary)"
    )
    parser.add_argument(
        "--cases-dir",
        default="cases",
        help="target directory (default: cases)",
    )
    parser.add_argument(
        "--show-frequency",
        action="store_true",
        help="show duplicate assertions (only 2x+)",
    )
    args = parser.parse_args()

    case_dir = pathlib.Path(args.cases_dir)

    total_assertions = 0
    total_files = 0

    counter = defaultdict(int)
    files_by_assertion = defaultdict(list)

    for file in sorted(case_dir.glob("*.cpp")):
        total_files += 1
        run_lines = extract_run_lines(file)

        for run in run_lines:
            cmd = substitute(run, file)
            cmd = ensure_no_output(cmd)

            stderr = run_cmd(cmd)

            if not stderr:
                continue

            assertion = extract_assertion(stderr)
            if assertion:
                if args.assertions_only:
                    print(assertion)
                else:
                    print(f"{file} {assertion}")

                total_assertions += 1

                if args.show_frequency:
                    counter[assertion] += 1
                    files_by_assertion[assertion].append(str(file))

                break

    # --- summary ---
    if not args.assertions_only:
        print("\n=== summary ===")
        print(f"directory: {case_dir}")
        print(f"files: {total_files}")
        print(f"total assertions: {total_assertions}")
        print(get_clang_version())

    # --- optional duplicate analysis ---
    if not args.assertions_only and args.show_frequency:
        print("\n=== assertion duplicates (2x+) ===")

        for assertion, count in sorted(counter.items(), key=lambda x: -x[1]):
            if count < 2:
                continue

            print(f"{count}x {assertion}")
            for f in files_by_assertion[assertion]:
                print(f"  {f}")


if __name__ == "__main__":
    main()
