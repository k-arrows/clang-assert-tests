// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() {
  struct X {};
  struct Y : X {};
  auto z = []() {};
  static_assert((X *)(Y *)&z != (X *)(Y *)&z, "");
}
