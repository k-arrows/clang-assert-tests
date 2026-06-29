// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: ActOnTypeName
// EXPECT-CRASH-ASSERT: nullptr
// EXPECT-CRASH-ASSERT: identifier

[[omp::directive (declare reduction (plus: int omp_out += omp_in))]];
