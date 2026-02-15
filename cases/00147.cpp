// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: TransformTemplateTypeParmType
// EXPECT-CRASH-ASSERT: TemplateArgument
// EXPECT-CRASH-ASSERT: Missing

template <class = void> void foo() {
  []<class... I>(I) {}(1);
}

template void foo();
