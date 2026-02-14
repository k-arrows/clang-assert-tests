// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

#include <string.h>

const long foo[] = {'b'};

int bar() { return (strlen((char *)foo)); }
