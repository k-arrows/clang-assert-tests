// RUN: clang++ -fms-compatibility %s
// EXPECT-CRASH-NOASSERT

template <typename T> struct Foo;
template <typename T> struct Bar;
template <typename T> struct Baz : Bar<typename Foo<T>::Type> {};
template <typename T> struct Bar : Baz<T> {
  foo{};
};
