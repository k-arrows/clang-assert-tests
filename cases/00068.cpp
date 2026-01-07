// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: addConsistentQualifiers
// EXPECT-CRASH-ASSERT: getAddressSpace
// EXPECT-CRASH-ASSERT: hasAddressSpace

void foo(){
  void __attribute__((address_space(2))) *a2;
  void __attribute__((address_space(3))) *a3;
  a2 ? a2 : a3;
}
