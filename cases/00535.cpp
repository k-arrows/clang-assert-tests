// RUN: clang++ -c -m32 %s
// EXPECT-CRASH-ASSERT: APInt
// EXPECT-CRASH-ASSERT: isUIntN
// EXPECT-CRASH-ASSERT: N-bit

struct T {
  template <typename T> struct S {
    T data;
  };

  void *operator new[](unsigned int) {}

  S<int> foo[2147483647u];
};

void bar() {
  T t;
  new T;
}
