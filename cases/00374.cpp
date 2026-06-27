// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

struct SS { :( struct S; struct S {
