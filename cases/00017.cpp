// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isCXXTypeId
// EXPECT-CRASH-ASSERT: l_paren
// EXPECT-CRASH-ASSERT: Expected

template <class T> class Foo {};

void bar() { int baz = new (this Foo<int>(42, false)); }
