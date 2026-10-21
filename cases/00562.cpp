// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

int foo() {
  asm goto("" : "r"(0) : "r"(1)::label);
label:
  return 42;
}
