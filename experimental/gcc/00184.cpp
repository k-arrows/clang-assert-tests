// RUN: clang++ --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

struct S {
  int *s;
  S() : s(new int) {}
  S(const S &r) noexcept : s(r.s) { __atomic_fetch_add(r.s, 1, 4); }
};

struct T {
  explicit T(const S &x) : t(x) {}
  const S t;
};

struct U {
  operator int() const {
    new T(u);
    return 0;
  }
  S u;
};

bool foo(int i);

void test() {
  U t;
  if (!foo(t))
    ;
}
