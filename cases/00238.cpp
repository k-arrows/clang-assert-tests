// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: FindFirstQualifierInScope
// EXPECT-CRASH-ASSERT: isAmbiguous
// EXPECT-CRASH-ASSERT: ambiguities

struct S {};

namespace {
struct S {};
} // namespace

class C {
  C() {
    D d;
    d.S::s = 42;
  }
}
