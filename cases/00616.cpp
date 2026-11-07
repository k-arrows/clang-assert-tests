// RUN: clang++ -c -Wreorder %s
// EXPECT-CRASH-ASSERT: DiagnoseBaseOrMemInitializerOrder
// EXPECT-CRASH-ASSERT: NumIdealInits
// EXPECT-CRASH-ASSERT: found

template <class T> struct S {
  using type = int;
};

template <class T> T &&foo(typename S<T>::type &t);

template <typename... Args> struct F {
  int i = (Args() + ... + 0);
};

struct D {
  template <typename... Args>
  D(Args &&...args) : D(foo<Args>(args)...), F<Args...>() {}
};
