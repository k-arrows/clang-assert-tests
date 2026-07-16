// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: FindCompositePointerType
// EXPECT-CRASH-ASSERT: isNullPtrType
// EXPECT-CRASH-ASSERT: nullptr_t

typedef decltype(nullptr) nullptr_t;

struct X1 {
  operator int *();
};
struct X2 {
  operator const nullptr_t &();
};

int foo() { return X1() != X2(bar<int>()); }
