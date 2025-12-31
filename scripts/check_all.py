#!/usr/bin/env python3
import subprocess
from pathlib import Path

cases_dir = Path("cases")

try:
    clang_version = subprocess.run(
        ["clang", "--version"],
        capture_output=True,
        text=True,
        check=True
    ).stdout.splitlines()[0]
except Exception:
    clang_version = "Unknown"

files = sorted(
    [f for f in cases_dir.iterdir() if f.is_file()],
    key=lambda p: int(p.stem)
)

total = 0
ok_count = 0
fail_count = 0
failed_files = []

for f in files:
    total += 1
    try:
        result = subprocess.run(
            ["python3", "scripts/check.py", str(f)],
            capture_output=True,
            text=True,
            check=False
        )
        status = "OK" if "[OK]" in result.stdout else "FAIL"
    except Exception:
        status = "ERROR"
    if status == "OK":
        ok_count += 1
    else:
        fail_count += 1
        failed_files.append(f.name)

    print(f"{f.name} {status}")

print("\n=== Summary ===")
print(f"Clang version: {clang_version}")
print(f"Total: {total}")
print(f"OK: {ok_count}")
print(f"FAIL: {fail_count}")
if failed_files:
    print("Failed files:", ", ".join(failed_files))
