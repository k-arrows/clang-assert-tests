// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: create_OSAtomicCompareAndSwap
// EXPECT-CRASH-ASSERT: OldValueTy
// EXPECT-CRASH-ASSERT: NewValueTy

int foo = 0;
bool OSAtomicCompareAndSwap(char32_t __oldValue, int __newValue,
                            volatile int *__theValue);

void baz() {
  if (OSAtomicCompareAndSwap(0, 0, &foo))
    ;
}
