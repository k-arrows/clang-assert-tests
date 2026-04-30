// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setPointOfInstantiation
// EXPECT-CRASH-ASSERT: isValid
// EXPECT-CRASH-ASSERT: must

template <class T> struct S {};

struct SS {
  void *operator new(S<int>);
};

SS *ss = new SS;
