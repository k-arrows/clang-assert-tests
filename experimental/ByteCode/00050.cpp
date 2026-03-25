// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  float x[3][3];
};

struct T {
  S y;
};

static const S s = {1};
static const T t = {s};

void foo() {
  T x = t;
  if (__builtin_memcmp(&x, &t, sizeof(T)))
    __builtin_abort();
}
