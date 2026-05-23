// RUN: clang++ --analyze %s
// EXPECT-FAIL

void foo() {
  for (;; ({ continue; }))
    ;
}
