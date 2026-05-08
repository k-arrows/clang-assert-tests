// RUN: clang++ -c -std=c++23 %s
// EXPECT-FAIL

bool foo(this auto &x) { return x; }

static_assert(foo(42), "");
