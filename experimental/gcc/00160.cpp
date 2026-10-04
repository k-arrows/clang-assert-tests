// RUN: clang++ -c %s
// EXPECT-FAIL

static union {
  int i;
};

template <int &> struct S {};
S<i> s;
