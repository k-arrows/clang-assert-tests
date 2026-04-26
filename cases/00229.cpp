// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getArgKind
// EXPECT-CRASH-ASSERT: getNumArgs
// EXPECT-CRASH-ASSERT: Argument

typedef __typeof(sizeof(int)) size_t;
extern "C++" void *__builtin_alloca (size_t);
