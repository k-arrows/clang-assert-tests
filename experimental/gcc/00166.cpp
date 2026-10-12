// RUN: clang++ -c %s
// EXPECT-FAIL

auto L = [](auto a) { return a; };
constexpr char (*foo)(float) = L;

static_assert(foo(42.) == '42', "");
