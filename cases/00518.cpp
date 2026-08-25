// RUN: clang++ -c -fms-compatibility -fopenmp %s
// EXPECT-CRASH-ASSERT: getLength
// EXPECT-CRASH-ASSERT: isAnnotation
// EXPECT-CRASH-ASSERT: tokens

[uuid(
#pragma omp
