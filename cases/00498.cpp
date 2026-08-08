// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitMemberExpr
// EXPECT-CRASH-ASSERT: castAsCanonical
// EXPECT-CRASH-ASSERT: getCanonicalDecl
// EXPECT-CRASH-ASSERT: mismatch

template <class T> void foo(T);

template <class U> class C {
  template <class T> friend void foo(T) {
    C<U> c;
    c.i = 42;
  }

public:
  int i;
};

void bar() {
  foo(42);
  C<double> c;
}
