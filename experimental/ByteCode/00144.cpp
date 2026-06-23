// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S { virtual void s(); };
struct A : S { : ; };
constexpr A a;

static_assert(&dynamic_cast<S&>((A&)a), "");
