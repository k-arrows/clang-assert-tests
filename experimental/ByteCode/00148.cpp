// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

typedef int U[0];

constexpr bool foo() {
  auto p = new U[3.14];
  return true;
}
