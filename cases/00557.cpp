// RUN: clang++ -c %s
// EXPECT-FAIL

template <int I> struct S {
  template <class C> friend int main() { return I; }
};

template struct S<42>;

int main() {}
