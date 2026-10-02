// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ParseCXXClassMemberDeclaration
// EXPECT-CRASH-ASSERT: TemplateInfo
// EXPECT-CRASH-ASSERT: Nested

class C1 {
  class C2;
};

class C1::C2 {
  template <> __extension__ template
};
