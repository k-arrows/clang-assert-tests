// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

template<class T> struct Foo { T t; };
template<X class Y> using AFoo = Foo<Y>;
AFoo s = { 42 };
