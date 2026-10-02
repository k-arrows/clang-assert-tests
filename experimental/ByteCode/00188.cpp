// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getBaseClassOffset
// EXPECT-CRASH-ASSERT: BaseOffsets
// EXPECT-CRASH-ASSERT: Did

void foo() {
  struct X {};
  struct Y : X {};
  auto z = []() {};
  static_assert((X *)(Y *)&z != (X *)(Y *)&z, "");
}
