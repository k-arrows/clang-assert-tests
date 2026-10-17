// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getInlineDesc
// EXPECT-CRASH-ASSERT: BS.Pointee

struct S0 {
  constexpr S0(int s0) : data{s0} {}
  int data[1];
};

struct S1 {
  constexpr S1(S0 s0, S0 s1) : data{s0, s1} {}
  S0 data[0x0.1];
};

struct S2 {
  constexpr S2(S1 s0, S1 s1) : data{s0} {}
  S1 data[1];
};

constexpr S2 s2{{{0}, {0}}, {{0}, {0}}};
