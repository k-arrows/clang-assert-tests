// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

void foo(int z) {
  struct X {};
  struct Y : X {};
  ((X *)(Y *)&z != (X *)(Y *)&z, "");
};
