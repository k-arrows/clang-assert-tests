// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: find
// EXPECT-CRASH-ASSERT: isSpecificBuiltinType

#define OL __attribute__((overloadable))
#define PS(N) __attribute__((pass_object_size(N)))

void foo(void *p) OL;

void foo(char *p PS(0)) OL;

void bar(void *p) { int64_t(*p) = &foo; }
