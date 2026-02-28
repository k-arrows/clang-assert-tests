// RUN: clang++ -c -Wincompatible-function-pointer-types-strict %s
// EXPECT-CRASH-ASSERT: PerformImplicitConversion
// EXPECT-CRASH-ASSERT: Diagnosed
// EXPECT-CRASH-ASSERT: conversion

typedef void(F)();

long unsigned int strlen(const char *);

void foo() {
  F *p = strlen;
  p = &strlen;
}
