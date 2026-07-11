// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: BuildOverloadedArrowExpr
// EXPECT-CRASH-ASSERT: isRecordType
// EXPECT-CRASH-ASSERT: left-hand

struct S {};
constexpr S s;

struct SS {
  consteval const S *operator->() const { return &s; }
};

_Atomic SS ss;

constexpr int x = ss->foo;
constexpr int y = ss.foo();
