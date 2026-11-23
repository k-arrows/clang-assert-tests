// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: isTemporary
// EXPECT-CRASH-ASSERT: BS.Pointee

typedef decltype(sizeof(char)) size_t;

struct B0 {
  constexpr B0() {}
};
struct B1 : B0 {
  constexpr B1(int a = 42, const char *b = "foo") : a(a), b(b) {}
  int a;
  const char *b;
};
struct B2 : B0 {
  constexpr B2(const size_t &r) : r(r) {}
  const int &r;
};
struct D : B1, B2 {
  constexpr D() : B1(76), B2(a) {}
  int c = r;
};

constexpr D d;
static_assert(&d.r == &d.a, "");
