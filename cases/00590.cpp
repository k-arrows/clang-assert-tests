// RUN: clang++ -c -fsycl -fopenmp-simd %s
// EXPECT-CRASH-ASSERT: createOpenMPRuntime
// EXPECT-CRASH-ASSERT: OpenMPIsTargetDevice
// EXPECT-CRASH-ASSERT: prepared

// Type your code here, or load an example.
