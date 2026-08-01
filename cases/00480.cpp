// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: MightInstantiateTo
// EXPECT-CRASH-ASSERT: isDependentContext
// EXPECT-CRASH-ASSERT: can't

template <class T> struct A {
  template <T t> struct B {
    void foo();
  };
};

class C {
  int i;
  template <class T> template <T t> friend struct A<T>::B;
};

template <> struct A<char> {
  template <char t> struct B {
    void foo();
  };
};

template <char t> void A<char>::B<t>::foo() {
  C c;
  c.i = 0;
}
