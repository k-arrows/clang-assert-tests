// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: AnalyzeComparison
// EXPECT-CRASH-ASSERT: unsignedRange
// EXPECT-CRASH-ASSERT: negative

typedef unsigned __int128 __attribute__((__vector_size__(32))) V;

void foo(long u) {
  V v1 = u;
  V v2 = -v1 == u * u;
}
