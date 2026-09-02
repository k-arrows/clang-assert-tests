// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: CheckVarOrConceptTemplateTemplateId
// EXPECT-CRASH-ASSERT: Parameter
// EXPECT-CRASH-ASSERT: variable

void foo() {}
void bar(foo...[0]) {}
