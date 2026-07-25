// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: VisitWhileStmt
// EXPECT-CRASH-ASSERT: EntryConditionBlock

struct S {
  explicit operator bool();
};

void foo(int n) {
  while (S s = ({
           while (S t{}) {
           }
           S{};
         }))
    --n;
}
