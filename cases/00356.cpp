// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

template <typename T> struct A {
  void B { int y = 0; };
  template <typename U> int x = 0;
}

template <typename U>
struct A<long>::B<U &> {
};
template <typename U> int A<int>::x = 3;
template <> template <typename U> int A<int>::x<U &> = 4;

static_assert(A<long>::x<int &> == 5);
