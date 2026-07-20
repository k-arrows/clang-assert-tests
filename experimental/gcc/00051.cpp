// RUN: clang++ -c %s
// EXPECT-FAIL

class C {
#pragma GCC novector
  for (int i = 0; i < 2; i++)
    ;
};
