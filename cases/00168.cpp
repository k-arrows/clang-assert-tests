// RUN: clang++ -c -x c -std=c2y %s
// EXPECT-CRASH-ASSERT: getResultIndex
// EXPECT-CRASH-ASSERT: isResultDependent
// EXPECT-CRASH-ASSERT: result-dependent

constexpr double foo = _Generic(__builtin_counted_by_ref(), default: 0);
