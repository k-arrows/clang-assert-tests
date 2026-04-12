// RUN: clang++ -c -x c -std=c23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: copyRecord
// EXPECT-CRASH-ASSERT: ElemRecord

struct s1 {
  int a;
  float b;
  void *c;
  int *d;
  typeof(nullptr) e;
  int f;
  int g[2];
};
struct s2 {
  struct s1 x;
};
union u1 {
  int a;
  float b;
  void *c;
  int *d;
  struct s2 e;
};
struct s3 {
  union u1 x;
};

void foo() {
  constexpr struct s1 ss1 = {1, 2.0, 0, 0, nullptr, 7, {3, 4}};
  constexpr struct s1 ss2 = ss1;

  constexpr union u1 {
    int a;
    float b;
    void *c;
    int *d;
    struct s2 e;
  } uu1 = {};
  constexpr union u1 uu2 = {.e = {ss2}};
  constexpr struct s3 uu3 = {uu2};
}
