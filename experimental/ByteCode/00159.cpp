// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: peek
// EXPECT-CRASH-ASSERT: toPrimType

auto foo = [](bar) { int j; return j; };
constexpr int (*baz)(int) = foo;
int i = baz(42);
