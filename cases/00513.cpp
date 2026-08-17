// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckFriendAccess
// EXPECT-CRASH-ASSERT: getAsFunction

template <class T> void foo() {
  class C {
    template <typename U> friend void bar(T);
  };
}

template void foo<int>();
