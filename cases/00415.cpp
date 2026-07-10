// RUN: clang++ -c -std=c++20 -fdelayed-template-parsing %s
// EXPECT-CRASH-ASSERT: ActOnEndOfTranslationUnitFragment
// EXPECT-CRASH-ASSERT: LateParsedInstantiations
// EXPECT-CRASH-ASSERT: TU
// EXPECT-CRASH-ASSERT: late-parsed

export __preprocessed_module Private;

template <typename T> void foo(T t) {}
void bar() { foo<int>(42); }

__preprocessed_module : private;
