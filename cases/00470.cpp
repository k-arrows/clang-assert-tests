// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getArg
// EXPECT-CRASH-ASSERT: getNumArgs
// EXPECT-CRASH-ASSERT: access

namespace std {
void free();
}

void foo() { std::free(); }
