// RUN: clang++ -c -fblocks -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

typedef void (^foo)();
const foo &bar = ^{
};
