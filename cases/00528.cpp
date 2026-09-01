// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ParseOptionalCXXScopeSpecifier
// EXPECT-CRASH-ASSERT: MayBePseudoDestructor
// EXPECT-CRASH-ASSERT: annot_cxxscope

void foo() { (auto()->bar::); }
