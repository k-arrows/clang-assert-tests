// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

union U {
  constexpr U(const U &u) { ; };
};
