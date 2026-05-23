// RUN: clang++ --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

int foo = 0;
bool OSAtomicCompareAndSwap(char32_t __oldValue, int __newValue,
                            volatile int *__theValue);

void baz() {
  if (OSAtomicCompareAndSwap(0, 0, &foo))
    ;
}
