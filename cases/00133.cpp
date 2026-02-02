// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: RequireStructuralType
// EXPECT-CRASH-ASSERT: Kind
// EXPECT-CRASH-ASSERT: couldn't

class A {
  int i = ;
};

template <A a>
