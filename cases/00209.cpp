// RUN: clang++ -c -fopenacc %s
// EXPECT-PASS

#pragma acc routine seq device_type(*)
#pragma acc routine bind("asdf") seq
void foo();
