// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getOwningModuleSlow
// EXPECT-CRASH-ASSERT: isFromASTFile
// EXPECT-CRASH-ASSERT: Not

export __preprocessed_module foo;

template <class = int> class C;
template <class = float> class C;
