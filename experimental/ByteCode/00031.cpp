// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getStructBase
// EXPECT-CRASH-ASSERT: getStructNumBases
// EXPECT-CRASH-ASSERT: OOB

struct S {};

struct V : virtual S {};

struct W {
  V v{/* '}' is missing */;
} w;
