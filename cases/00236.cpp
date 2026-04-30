// RUN: clang++ -c -fblocks %s
// EXPECT-CRASH-ASSERT: CastConsistency
// EXPECT-CRASH-ASSERT: getType
// EXPECT-CRASH-ASSERT: getSubExpr
// EXPECT-CRASH-ASSERT: isBlockPointerType

typedef int(foo)(long, int);
int x(long);
foo *f;

void bar() {
  f = (foo *)x;
  int (^y)(long);
  f = (foo * _Atomic) y;
}
