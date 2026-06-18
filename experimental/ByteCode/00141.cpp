// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getVirtualBase
// EXPECT-CRASH-ASSERT: VirtualBaseMap.end
// EXPECT-CRASH-ASSERT: Missing

struct X {};
struct Y : virtual X {};
struct Z {
} z;

static_assert((X *)(Y *)&z, "");
