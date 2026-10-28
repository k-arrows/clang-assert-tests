// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: CanCaptureValue
// EXPECT-CRASH-ASSERT: isIncompleteType

struct S {
  __declspec(property(get = Get)) int foo;
  void Get() {}
};

void bar() {
  S s;
  s.foo++;
}
