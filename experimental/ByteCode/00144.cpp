// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getInlineDesc
// EXPECT-CRASH-ASSERT: GlobalInlineDescriptor

struct S { virtual void s(); };
struct A : S { : ; };
constexpr A a;

static_assert(&dynamic_cast<S&>((A&)a), "");
