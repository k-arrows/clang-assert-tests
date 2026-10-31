// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

const unsigned __int128 foo[] = {};
constexpr int bar = __builtin_strlen((char *)foo);
