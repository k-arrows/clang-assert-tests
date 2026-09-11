// RUN: clang++ -std=c++20 %s
// EXPECT-FAIL

struct strong_ordering;

struct X {
  struct Y y;
  strong_ordering operator<=>(const X &) = default;
};

struct Y : X {
  strong_ordering operator<=>(const Y &) = default;
};
