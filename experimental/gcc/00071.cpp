// RUN: clang++ -c %s
// EXPECT-FAIL

void foo()
  requires requires { [] = new int[__builtin_is_constant_evaluated() ? 1 : 2] };
