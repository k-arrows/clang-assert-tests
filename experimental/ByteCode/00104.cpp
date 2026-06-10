// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

using u8 = unsigned char;

template <typename T> struct R {
  T CO, V;
  constexpr bool operator==(const R<T> &O) { return CO == O.CO && V == O.V; }
};

constexpr R<u8> subcb(u8 lhs, u8 rhs, u8 carry) {
  u8 carry_out{}, sum{};
  // sum = __builtin_subcb(lhs, rhs, carry, &carry_out);
  sum = __builtin_subcb(lhs, rhs, carry, &rhs);
  return {carry_out, sum};
}

static_assert(subcb(10, 15, 1) == R<u8>{1, 250});
