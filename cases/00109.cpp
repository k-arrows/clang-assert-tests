// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> struct A;

class C {
  int i;
  template <class T> template <T t> friend struct A<T>::B;
};

template <class T> struct A<T *> {
  template <T *t> struct B {};
};

template <class T> template <T *t> void A<T *>::B<t>::f() {
  C c;
  c.i = 0;
}
