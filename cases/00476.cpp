// RUN: clang++ -c -std=c++03 %s
// EXPECT-CRASH-ASSERT: defaultedMoveConstructorIsDeleted
// EXPECT-CRASH-ASSERT: needsOverloadResolutionForMoveConstructor
// EXPECT-CRASH-ASSERT: SMF_MoveConstructor
// EXPECT-CRASH-ASSERT: property

struct __attribute__((trivial_abi)) D {
  D(const D &);
  D(D &&);
};

struct __attribute__((trivial_abi)) S {
  D d;
};
