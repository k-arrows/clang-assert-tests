// RUN: clang++ -c -Weverything %s
// EXPECT-CRASH-ASSERT: DeduceVariableDeclarationType
// EXPECT-CRASH-ASSERT: isLinkageValid

auto L = [](auto) { auto L = [](auto) {}; };
