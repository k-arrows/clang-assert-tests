// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: handleAllocSizeAttr
// EXPECT-CRASH-ASSERT: isFuncOrMethodForAttrSubject
// EXPECT-CRASH-ASSERT: hasFunctionProto

void foo() = ^ __attribute__((alloc_size(1))) () {};
