// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct A {};
template <template <typename> typename TT> struct S {
  A(int)->TT<int>;
}()
