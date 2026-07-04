// RUN: clang++ -c -std=c++2c %s
// EXPECT-CRASH-ASSERT: isCurrentInstantiation
// EXPECT-CRASH-ASSERT: isDependentContext

struct S;
template <template <typename> typename T> void foo() { S...[0] ::bar; }

template <typename T> struct SS;

void baz() { foo<SS>(); }
