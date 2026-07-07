// RUN: clang++ -c %s
// EXPECT-FAIL

template <int> void foo(const void * = nullptr);

template <int> struct S {
  template <int> friend void foo(const void *) {}
};

void foo(int I) { (void)S<I>{}; }

int main() { foo<42>(); }
