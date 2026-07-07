// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getTemplateInstantiationArgs
// EXPECT-CRASH-ASSERT: Qualifier
// EXPECT-CRASH-ASSERT: without 

template <typename> struct S {
  template <typename typename> inline auto foo = 42;
};

int bar = S<int>::foo<int, int>;
