// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: getArg
// EXPECT-CRASH-ASSERT: getNumArgs
// EXPECT-CRASH-ASSERT: access

void operator-();

void foo() {
#pragma acc kernels loop
  for (I i = 0; i <= 2; i = -i)
    ;
};
