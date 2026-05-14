// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getInlineDesc
// EXPECT-CRASH-ASSERT: GlobalInlineDescriptor

constexpr const int *foo[][1] = { bar };
static_assert(foo[0][0] == nullptr, "");
