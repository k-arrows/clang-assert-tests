// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

template <class T> auto foo = [](__ibm128) {};
