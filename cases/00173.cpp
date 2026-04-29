// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

static_assert(true, "";);
