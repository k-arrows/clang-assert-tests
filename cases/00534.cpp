// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: getPredefinedExprDecl
// EXPECT-CRASH-ASSERT: LSI
// EXPECT-CRASH-ASSERT: Should

auto l = [](auto a) { return 42; };
using L = decltype(l);

auto L::operator()() const { return {"<="}; }
