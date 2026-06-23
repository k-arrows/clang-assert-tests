// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct X {};
struct Y : virtual X {};
struct Z {
} z;

static_assert((X *)(Y *)&z, "");
