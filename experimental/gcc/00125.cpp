// RUN: clang++ -c %s
// EXPECT-FAIL

int scanf(const char *, ...);

template <typename... Args>
__attribute__((format(!__is_function(int))))
int scan(const char *fmt, Args &&...args) {
  return scanf(fmt, args...);
}

union U {
  float f;
} u;

int foo() { return scan("%f", &u.f); }
