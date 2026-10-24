// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: DoBitCast
// EXPECT-CRASH-ASSERT: FullBitWidth.isFullByte

constexpr _BitInt(sizeof(int) * 8) BI = ~0;
constexpr unsigned int I = __builtin_bit_cast(unsigned int, BI);
constexpr _BitInt(sizeof(int) *
                  8) IB = __builtin_bit_cast(_BitInt(sizeof(int) * 5), I);
