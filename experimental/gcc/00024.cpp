// RUN: clang++ -c %s
// EXPECT-FAIL

union U {
  const int &i = 42;
};

constexpr U u{};
