// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr const int *foo[][1] = { bar };
static_assert(foo[0][0] == nullptr, "");
