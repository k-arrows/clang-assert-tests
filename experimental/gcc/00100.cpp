// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

class C {
public:
  C() {
    int a[2] = {0, 1};
    static auto [... aa] = a;
  }
} c;
