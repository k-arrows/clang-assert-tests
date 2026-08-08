// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getStructField
// EXPECT-CRASH-ASSERT: getStructNumFields
// EXPECT-CRASH-ASSERT: OOB

class B {
  int x;

public:
  constexpr B(int x) : x() {}
};

class B2 {};

class D : public B, public B2 {
public:
  constexpr D() {}
};

constexpr D d;
