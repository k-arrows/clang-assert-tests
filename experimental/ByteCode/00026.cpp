// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

#include <string.h>

const long foo[] = {'b'};

int bar() { return (strlen((char *)foo)); }
