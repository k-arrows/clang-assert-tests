// RUN: clang++ -c %s
// EXPECT-FAIL

void foo(int i) {
template <class T>
void bar(int t = X<sizeof(T) {
  [=] {
   i = 1;
