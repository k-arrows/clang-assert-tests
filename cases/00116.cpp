// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: GetEnumUnderlyingType
// EXPECT-CRASH-ASSERT: isThisDeclarationADemotedDefinition

enum E {};
enum E;

enum {
  a = (__underlying_type(E)){},
};
