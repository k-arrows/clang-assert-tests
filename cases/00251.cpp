// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnExceptionDeclarator
// EXPECT-CRASH-ASSERT: isDeclScope

void foo() {
  try {
  } catch(bar <class T> T {})
}
