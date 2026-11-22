// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

namespace std {
struct source_location {
  struct __impl {
    void foo(int p) pre(p > 0) {}
  };
};
} // namespace std
