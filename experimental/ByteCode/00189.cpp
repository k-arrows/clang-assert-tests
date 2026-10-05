// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getVBaseClassOffset
// EXPECT-CRASH-ASSERT: VBaseOffsets
// EXPECT-CRASH-ASSERT: Did

void foo() {
  struct X {};
  struct Y : virtual X {};
  auto z = []() {};
  static_assert((X *)(Y *)&z != (X *)(Y *)&z, "");
}
