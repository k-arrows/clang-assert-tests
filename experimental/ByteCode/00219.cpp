// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: toAPSInt
// EXPECT-CRASH-ASSERT: isNumber

namespace std {
struct S {
  constexpr S(char *) {}
};
template <typename> struct U {
  S s;
  constexpr ~U() {}
};
template <typename> struct M;
template <typename T> struct M<T[]> {
  typedef U<T[]> arr;
};
template <typename T> using u = M<T>::arr;
constexpr u<char[]> foo(long n) { return U<char[]>(new char[n]); }
} // namespace std

void bar() {
  int baz;
  std::U p = std::foo((long)&baz);
}
