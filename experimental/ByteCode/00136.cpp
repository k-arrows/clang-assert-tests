// RUN: clang++ -c -std=c++2b -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

auto b = [](this C) { return 1; };
static_assert((&decltype(b)::operator())(1) == 1);
