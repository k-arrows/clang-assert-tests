// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getInlineDesc
// EXPECT-CRASH-ASSERT: getSize

class type_info {};

struct S {
  type_info &ti;
};

constexpr S s[] = /* missing */;

auto &x = s[0].ti;
