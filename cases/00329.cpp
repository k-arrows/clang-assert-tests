// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

enum class C {};

struct S {
  friend void C::Foo();
};
