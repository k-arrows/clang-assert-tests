// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

class S {
public:
  S operator++(double);
};

void foo() {
  S s;
  int i;
  for (; i < 10; s++, i++) {
  }
}
