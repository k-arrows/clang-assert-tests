// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: checkPreCall
// EXPECT-CRASH-ASSERT: HasRefTypeParam
// EXPECT-CRASH-ASSERT: DV

class C {
public:
  void foo();
};

void C::foo() {}

void bar() { void *Cf = __builtin_function_start(&C::foo); }
