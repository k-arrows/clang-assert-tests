// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DefineUsedVTables
// EXPECT-CRASH-ASSERT: TSK_ExplicitInstantiationDefinition
// EXPECT-CRASH-ASSERT: TSK_ImplicitInstantiation
// EXPECT-CRASH-ASSERT: don't

template <class T> struct A {};
template <class T> struct B : A<T> {
  template <class T> struct S;
  template <> struct S<int> {
    virtual void foo();
  };
  void bar() { S<int> s; }
};

template struct B<int>;
