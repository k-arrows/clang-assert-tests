// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ~SavePendingParsedClassStateRAII
// EXPECT-CRASH-ASSERT: DelayedEquivalentExceptionSpecChecks
// EXPECT-CRASH-ASSERT: there

template <typename T> struct S {
  struct Y {
    virtual ~Y() {}
    struct C {
      friend Y::~Y();
    } c;
  };
};

template struct S<void *>;
