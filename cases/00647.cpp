// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getZExtValue
// EXPECT-CRASH-ASSERT: getActiveBits
// EXPECT-CRASH-ASSERT: uint64_t

int z __attribute__((aligned((__int128_t)-1 << 64)));
