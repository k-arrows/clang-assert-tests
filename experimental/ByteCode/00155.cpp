// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: deref
// EXPECT-CRASH-ASSERT: isDereferencable

constexpr int &foo = foo;
int &bar = (bar, foo);
