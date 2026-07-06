// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: InstantiateClassMembers
// EXPECT-CRASH-ASSERT: TSK_ExplicitInstantiationDefinition
// EXPECT-CRASH-ASSERT: TSK_ExplicitInstantiationDeclaration
// EXPECT-CRASH-ASSERT: TSK_ImplicitInstantiation
// EXPECT-CRASH-ASSERT: isLocalClass
// EXPECT-CRASH-ASSERT: Unexpected

template <class T, typename S> void foo(T argc, S **argv) {
  template <> struct T<42> {};

#pragma omp parallel for
  for (T i = 0; i < 2; i++)
    ;
}

int main(int argc, char **argv) { foo<int, char>(argc, argv); }
