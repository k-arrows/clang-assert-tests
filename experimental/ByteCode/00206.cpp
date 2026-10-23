// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getDeclDesc
// EXPECT-CRASH-ASSERT: BS.Pointee

struct S {
  int a, b;
};

constexpr int &&s = S{1, 2}.b;

struct D {
  const bool &b;
};
struct V : D, S {
  constexpr V() : D{true}, S{3, 4} {}
};

constexpr S &&ss = V{};
constexpr V &v = static_cast<V &>(ss);
