// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckClassTemplate
// EXPECT-CRASH-ASSERT: PrevClassTemplate
// EXPECT-CRASH-ASSERT: specialization

class C {
  class P {};

  template <typename T1> class FT {
    template <typename T2> class BT1 {};
  };

  template <> template <typename NT> class FT<C::P>::BT2 {};
};
