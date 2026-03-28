// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EvaluateAsBooleanCondition
// EXPECT-CRASH-ASSERT: isValueDependent
// EXPECT-CRASH-ASSERT: evaluator

#define _diagnose_if(...) __attribute__((diagnose_if(__VA_ARGS__)))

void bar(baz a) _diagnose_if(a == 1, "warning", "error");

void foo(void) { bar(1); }
