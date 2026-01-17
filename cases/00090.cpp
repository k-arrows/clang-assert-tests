// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnPragmaPack
// EXPECT-CRASH-ASSERT: getAlignMode
// EXPECT-CRASH-ASSERT: Empty

#pragma options align = natural
#pragma pack(pop, 16)
#pragma pack(pop)
