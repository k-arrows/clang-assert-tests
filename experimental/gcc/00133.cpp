// RUN: clang++ -c -std=c++03 %s
// EXPECT-FAIL

int a = __builtin_is_pointer_interconvertible_with_class();
