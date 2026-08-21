// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

constexpr char *foo(char *p) {
  auto q = reinterpret_cast<long unsigned>(p);
  q++;
  return p;
}

auto bar = foo("42");
