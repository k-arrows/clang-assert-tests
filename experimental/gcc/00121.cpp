// RUN: clang++ -c %s
// EXPECT-FAIL

template <class...> struct S {
  template <struct T> auto foo() -> decltype(foo<void>(), *T());
  template <class T> auto foo() -> decltype(foo<void>(), *T());
};

void bar() { S<>::foo<void>(); }
