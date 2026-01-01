// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getStackIndexOfNearestEnclosingCaptureCapableLambda
// EXPECT-CRASH-ASSERT: IndexOfCaptureReadyLambda
// EXPECT-CRASH-ASSERT: getCurGenericLambda
// EXPECT-CRASH-ASSERT: lambda

void foo(int i) {
template <class T>
void bar(int t = X<sizeof(T) {
  [=] {
   i = 1;
