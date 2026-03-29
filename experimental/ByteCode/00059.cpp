// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: Ret
// EXPECT-CRASH-ASSERT: getFrameOffset
// EXPECT-CRASH-ASSERT: Invalid

struct S {};
template <auto V> struct M;

template <typename C, int N1, int N2> auto f(const C &, M<N1> *, M<N1> *) {}

template <typename F, typename C, typename N1, typename N2>
constexpr bool check(const C &c, N1 *n1, N2 *n2) {
  decltype(f(c, n1, n2)) *chk{};
  return true;
}

template <int N> constexpr M<N> *bar() { return nullptr; }

static_assert(check<S>([](int n) constexpr {}, bar<1u>(), bar<1u>()));
