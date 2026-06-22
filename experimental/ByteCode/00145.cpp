// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: DynamicCast
// EXPECT-CRASH-ASSERT: LimitedPtr.getRecord

struct S { virtual void s(); };
struct A : S {};
struct B : A {};

constexpr __UINTPTR_TYPE__ g = 0;
static_assert(&dynamic_cast<A&>((S&)(B&)g) == &(A&)(B&)g);
