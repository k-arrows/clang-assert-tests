// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ImplicitAllocationArguments
// EXPECT-CRASH-ASSERT: isAlignValT

namespace std {
struct align_val_t {};
enum align_val_t {};
} // namespace std

struct S {};

void foo() { S *s = new S; }
