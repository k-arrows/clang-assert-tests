// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckTemplateArgument
// EXPECT-CRASH-ASSERT: isPointerOrReferenceType
// EXPECT-CRASH-ASSERT: isNullPtrType

struct S {};

void foo() { int res = s->i; }

static int bar = foo();
template <int N> struct SS {};
void baz(SS<bar>) {}
