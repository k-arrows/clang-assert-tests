// RUN: clang++ -c %s
// EXPECT-FAIL

template<typename T> struct A {
  template<typename U> struct B {};
};

template<>
template<>
template<typename V>
struct A<int>::template B<bool>::C;

template<>
template<>
template<typename V>
struct A<int>::template B<bool>::C;
