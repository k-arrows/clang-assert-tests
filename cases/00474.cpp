// RUN: clang++ -c -fms-compatibility %s
// EXPECT-PASS

static_assert(1234i8, "");
