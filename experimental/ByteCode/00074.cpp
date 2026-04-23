// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: increment
// EXPECT-CRASH-ASSERT: A.isNumber

constexpr char *foo(char *p) {
  auto q = reinterpret_cast<long unsigned>(p);
  q++;
  return p;
}

auto bar = foo("42");
