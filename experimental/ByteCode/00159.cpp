// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

auto foo = [](bar) { int j; return j; };
constexpr int (*baz)(int) = foo;
int i = baz(42);
