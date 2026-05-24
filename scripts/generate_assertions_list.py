#!/usr/bin/env python3

import subprocess
import sys
from pathlib import Path


# Project root directory
ROOT = Path(__file__).resolve().parent.parent

# Path to the existing assertion listing script
LIST_ASSERTIONS = ROOT / "scripts" / "list_assertions.py"

# Output file path
OUTPUT_FILE = ROOT / "assertions_list.txt"


def run_command(args):
    """
    Run a command and capture both stdout and stderr.
    Exit immediately if the command fails.
    """
    result = subprocess.run(
        args,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
        cwd=ROOT,
    )

    if result.returncode != 0:
        print(result.stdout, end="")
        sys.exit(result.returncode)

    return result.stdout


def main():
    outputs = []

    # Generate assertions from the default cases directory
    outputs.append(
        run_command(
            [
                "python3",
                str(LIST_ASSERTIONS),
                "--assertions-only",
            ]
        )
    )

    # Generate assertions from the experimental ByteCode cases
    outputs.append(
        run_command(
            [
                "python3",
                str(LIST_ASSERTIONS),
                "--cases-dir",
                "experimental/ByteCode/",
                "--assertions-only",
            ]
        )
    )

    # Write the combined output to assertions_list.txt
    OUTPUT_FILE.write_text("".join(outputs), encoding="utf-8")

    print(f"Generated: {OUTPUT_FILE}")


if __name__ == "__main__":
    main()
