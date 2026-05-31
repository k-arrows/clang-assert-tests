// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: evaluateAsInitializer
// EXPECT-CRASH-ASSERT: Stk.empty

struct S {};
constexpr S s;
constexpr int foo = (dynamic_cast<const S &>(s), 0);
