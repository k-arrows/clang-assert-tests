// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

const unsigned __int128 foo[] = {};
constexpr int bar = __builtin_strlen((char *)foo);
