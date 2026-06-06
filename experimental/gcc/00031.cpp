// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

struct S {
  int foo() post(r : const_cast<int &>(r)++) post(r : const_cast<int &>(r)++) {
    return 1;
  };
};
