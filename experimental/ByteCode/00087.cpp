// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

namespace std {
template <class _E> class initializer_list {};
} // namespace std

template <int> struct S {};
template <> struct std::initializer_list<S<2>> {
  const S<2> *first;
  const S<2> *last;
};

constexpr auto foo() {
  constexpr auto bar = {S<2>{}, S<2>{}, S<2>{}};
  static_assert(bar.first + 3 == bar.last, "");
}
