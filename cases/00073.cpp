// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EnterTokenStream
// EXPECT-CRASH-ASSERT: IsReinject
// EXPECT-CRASH-ASSERT: cached 

struct S<> {
  () T { };

void foo() {
#pragma clang loop vectorize_width(4)
}

namespace N
