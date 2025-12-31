#!/usr/bin/env python3
import re
import shlex
import shutil
import subprocess
import sys
from pathlib import Path


def parse_directives(source):
    run_cmd = None
    expected_asserts = []
    expect = None  # PASS / FAIL / CRASH-NOASSERT / CRASH-ASSERT

    for line in source.splitlines():
        line = line.strip()

        # RUN
        m = re.fullmatch(r"//\s*RUN:\s*(.+)", line)
        if m:
            run_cmd = m.group(1)
            continue

        # PASS
        if re.fullmatch(r"//\s*EXPECT-PASS\s*", line):
            if expect is not None:
                raise RuntimeError("Multiple EXPECT-* directives found")
            expect = "PASS"
            continue

        # FAIL
        if re.fullmatch(r"//\s*EXPECT-FAIL\s*", line):
            if expect is not None:
                raise RuntimeError("Multiple EXPECT-* directives found")
            expect = "FAIL"
            continue

        # CRASH-NOASSERT
        if re.fullmatch(r"//\s*EXPECT-CRASH-NOASSERT\s*", line):
            if expect is not None:
                raise RuntimeError("Multiple EXPECT-* directives found")
            expect = "CRASH-NOASSERT"
            continue

        # CRASH-ASSERT
        m = re.fullmatch(r"//\s*EXPECT-CRASH-ASSERT:\s*(.*)", line)
        if m:
            if expect is not None and expect not in ("CRASH-ASSERT",):
                raise RuntimeError("Multiple EXPECT-* directives found")
            expect = "CRASH-ASSERT"
            msg = m.group(1).strip()
            if not msg:
                raise RuntimeError(
                    "EXPECT-CRASH-ASSERT requires assertion message"
                )
            expected_asserts.append(msg)
            continue

    if not run_cmd:
        raise RuntimeError("RUN directive not found")
    if not expect:
        raise RuntimeError("No supported EXPECT-* directive found")

    return run_cmd, expect, expected_asserts


def main():
    if len(sys.argv) != 2:
        print("usage: check_assert.py <source.cpp>")
        sys.exit(1)

    src = Path(sys.argv[1])
    text = src.read_text()

    run_cmd, expect, expected_asserts = parse_directives(text)
    run_cmd = run_cmd.replace("%s", str(src))
    argv = shlex.split(run_cmd)

    if "-c" in argv and "-o" not in argv:
        argv += ["-o", "/dev/null"]

    exe = shutil.which(argv[0])
    if exe:
        argv[0] = exe

    print("[RUN]", " ".join(shlex.quote(a) for a in argv))

    proc = subprocess.run(
        argv,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True
    )

    rc = proc.returncode
    stderr = proc.stderr

    if expect == "PASS":
        if rc != 0:
            print("[NG] Expected success, but failed with non-zero rc")
            sys.exit(1)
        print("[OK] Compilation succeeded as expected")

    elif expect == "FAIL":
        if rc == 0:
            print("[NG] Expected failure, but succeeded")
            sys.exit(1)
        if ": Assertion" in stderr:
            print("[NG] Unexpected assertion detected")
            sys.exit(1)
        if "PLEASE submit a bug report" in stderr:
            print(
                "[NG] Expected failure, but crash detected "
                "(no assertion messages)"
            )
            sys.exit(1)
        else:
            print("[OK] Failed without crashing as expected")

    elif expect == "CRASH-NOASSERT":
        if rc == 0:
            print("[NG] Expected crash, but succeeded")
            sys.exit(1)
        if ": Assertion" in stderr:
            print("[NG] Unexpected assertion detected")
            sys.exit(1)
        if "PLEASE submit a bug report" in stderr:
            print(
                "[OK] Crash detected (no assertion messages) "
                "as expected"
            )
        else:
            print(
                "[NG] Expected crash, but rc is non-zero and "
                "no crash detected"
            )
            sys.exit(1)

    elif expect == "CRASH-ASSERT":
        if rc == 0:
            print("[NG] Expected crash with assertion, but succeeded")
            sys.exit(1)
        if "PLEASE submit a bug report" not in stderr:
            print(
                "[NG] Expected crash with assertion, but rc is non-zero "
                "and no crash detected"
            )
            sys.exit(1)
        missing = [msg for msg in expected_asserts if msg not in stderr]
        if missing:
            print("[NG] Missing expected assertion messages:")
            for m in missing:
                print(f"     {m}")
            sys.exit(1)
        print("[OK] Crash with expected assertions detected")

    else:
        raise RuntimeError(f"Unknown expectation: {expect}")


if __name__ == "__main__":
    main()
