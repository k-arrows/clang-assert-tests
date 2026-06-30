// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: TryObjectArgumentInitialization
// EXPECT-CRASH-ASSERT: isRecordType

struct S {};
constexpr S s;

struct SS {
  consteval const S *operator->() const { return &s; }
  consteval int foo() const { return 42; }
};

_Atomic SS ss;

constexpr int v = ss->b;
constexpr int x = ss.foo();
