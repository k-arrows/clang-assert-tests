// RUN: clang++ -c %s
// EXPECT-FAIL

template <bool B> constexpr bool foo = false;

template <typename... Ts>
  requires foo<(requires(Ts ts) { requires sizeof(ts); } && ...)>
struct S {};

using bar = S<short>;
