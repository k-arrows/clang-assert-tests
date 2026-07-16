// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {};

struct V : virtual S {};

struct W {
  V v{/* '}' is missing */;
} w;
