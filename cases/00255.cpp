// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

struct S1 {
  ~S1() noexcept(foo());
};

struct S2 {
  S1 s1;
  ~S2() {}
};
