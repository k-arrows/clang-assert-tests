// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

namespace std {
template <typename T> struct tuple_size;
template <int, typename> struct tuple_element;
} // namespace std

int d, i;

struct C {
  constexpr C() {}
  constexpr C(const C &) {}
  template <int I> int &get() const {
    static_assert(d == 1 + I);
    ++d;
    return i;
  }
};

template <> struct std::tuple_size<const C> {
  static const int value = 3;
};
template <int I> struct std::tuple_element<I, const C> {
  using type = int;
};

constexpr C foo(const C &) { return C{}; }

thread_local const auto &[s, t, u] = foo(C{});
