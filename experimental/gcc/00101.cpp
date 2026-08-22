// RUN: clang++ -O2 --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

int c;

struct S {
  S(int i) {}
};

void bar(void (*foo)()) {
  try {
    foo();
  } catch (int) {
    if (c)
      return;
  }
  __builtin_abort();
}

void baz() {
  struct D {
    S s;
  };
  bar([] { D d{42}; });
}
