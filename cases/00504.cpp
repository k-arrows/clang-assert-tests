// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getDeviceKernelCallingConv
// EXPECT-CRASH-ASSERT: getABIInfo
// EXPECT-CRASH-ASSERT: OpenCL

[[clang::amdgpu_kernel]] void foo() {}
