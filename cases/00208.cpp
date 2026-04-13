// RUN: clang++ -c -x c -ffixed-point %s
// EXPECT-CRASH-ASSERT: handleComplexIntegerToFloatConversion
// EXPECT-CRASH-ASSERT: isComplexIntegerType

#define FUNC(TYPE, NAME, PF)                                                   \
  void NAME() {                                                                \
    TYPE d;                                                                    \
    int i;                                                                     \
    for (d = 0.1##PF, i = 0; d <= 0.8##PF; d += 0.1##PF)                       \
      i++;                                                                     \
  }

FUNC(_Sat unsigned short _Fract, Susf, i)

void foo() { Susf()<stdint.h> }
