// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: adjustDeclContextForDeclaratorDecl
// EXPECT-CRASH-ASSERT: InEnclosingNamespaceSetOf
// EXPECT-CRASH-ASSERT: redeclaration

extern "C" {
extern int strcmp(const char *s, const char *t) throw();

namespace A {

int A::strcmp(const char *s, const char *t) { return strcmp(s, t); }
} // namespace A
}
