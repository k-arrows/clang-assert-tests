// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: HandleRecordDecl
// EXPECT-CRASH-ASSERT: getNumSubstitutedLevels
// EXPECT-CRASH-ASSERT: Outer

template <int> void foo(const void * = nullptr);

template <int> struct S {
  template <int> friend void foo(const void *) {}
};

void foo(int I) { (void)S<I>{}; }

int main() { foo<42>(); }
