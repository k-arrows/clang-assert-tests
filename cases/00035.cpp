// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: Create
// EXPECT-CRASH-ASSERT: getNameKind
// EXPECT-CRASH-ASSERT: CXXDestructorName
// EXPECT-CRASH-ASSERT: destructor

template <typename T> struct S {
  friend T::U::~foo();
};

struct U {};

S<U> e;
