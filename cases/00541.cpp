// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: set
// EXPECT-CRASH-ASSERT: getNestedNameSpecifier
// EXPECT-CRASH-ASSERT: this

struct S {
  struct T;
};

struct S::T {
} __builtin_va_list s;
