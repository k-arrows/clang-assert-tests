// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

class Dim;
struct S;
template <class T> concept foo = true;
template <class T> concept SS = false;
template <class X> concept _Dim = _Dim<X>;
template <SS, _Dim Dim, foo<> E> auto bar(Dim, E) {};

void baz() {
  auto qux = bar<S>(true, [] {});
}
