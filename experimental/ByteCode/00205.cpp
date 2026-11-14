// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

void foo(int z) {
  struct X {};
  struct Y : X {};
  ((X *)(Y *)&z != (X *)(Y *)&z, "");
};
