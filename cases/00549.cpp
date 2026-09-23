// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: BinaryOperator
// EXPECT-CRASH-ASSERT: isCompoundAssignmentOp
// EXPECT-CRASH-ASSERT: CompoundAssignOperator

template <typename T> class S {
  __declspec(property(put = foo)) T x[];
  T foo() { return x += T(1); }
};
