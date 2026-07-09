// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: Declarator
// EXPECT-CRASH-ASSERT: isStandardAttributeSyntax
// EXPECT-CRASH-ASSERT: isRegularKeywordAttribute
// EXPECT-CRASH-ASSERT: DeclarationAttrs

[[uuid("hidden")]] class C {
} c;
