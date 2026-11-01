// RUN: clang++ -c -std=c++23 -fms-compatibility -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

auto foo() {
  const long bar = (long)&&label;
  return (void *)bar;
label:
}
