// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: addExtParameterInfosForCall
// EXPECT-CRASH-ASSERT: paramInfos.size
// EXPECT-CRASH-ASSERT: forget

void foo(void (*fp)(void *__attribute__((pass_object_size(0))))) {
  int p[32];
  fp(p);
}
