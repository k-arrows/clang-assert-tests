// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: Pointer
// EXPECT-CRASH-ASSERT: getMetadataSize

struct S1 {};

struct S2 : S1
{
  int f(int) { return 42; /* } is missing */
};

struct S3: S2
{
  int f() { return 42; }
};

static constexpr int (S1::*p)() const = nullptr;

static constexpr S1 const* pp = nullptr;

static_assert((pp->*p)() == 42);
