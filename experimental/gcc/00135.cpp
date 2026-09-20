// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> consteval bool foo(const T *p) {
  return __builtin_is_within_lifetime(p);
}

struct S {
  char a;
};
constexpr S s = { int b; };

bool bar() { return (!foo(&s.a)); }
