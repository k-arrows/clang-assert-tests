// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: SubstQualifier
// EXPECT-CRASH-ASSERT: getFriendObjectKind
// EXPECT-CRASH-ASSERT: isDependentContext
// EXPECT-CRASH-ASSERT: non-friend

template <auto T, decltype(T) U>
concept C1 = sizeof(T) >= 4;

template <char X> constexpr void foo() {
  class C {
    class foo;
  };
  class C::foo {};
}

static_assert(foo<'a'>() == 2);
