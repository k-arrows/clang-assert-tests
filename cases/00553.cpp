// RUN: clang++ -c -std=c++2c %s
// EXPECT-CRASH-ASSERT: CheckVarOrConceptTemplateTemplateId
// EXPECT-CRASH-ASSERT: Parameter
// EXPECT-CRASH-ASSERT: variable

template <class T>
concept C = true;
template <template <class> concept... CC> int foo(CC &) { return 42; }

static_assert(foo<C>(0) == 42, "");
