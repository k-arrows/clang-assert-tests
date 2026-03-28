// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getZExtValue
// EXPECT-CRASH-ASSERT: getActiveBits
// EXPECT-CRASH-ASSERT: uint64_t

_BitInt(123456789012345678901uwb) foo(_BitInt(128) a) { return a; }
