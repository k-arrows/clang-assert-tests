// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: doit
// EXPECT-CRASH-ASSERT: Val
// EXPECT-CRASH-ASSERT: null

#pragma acc routine seq device_type(*)
#pragma acc routine bind("asdf") seq
void foo();
