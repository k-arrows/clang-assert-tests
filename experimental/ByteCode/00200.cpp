// RUN: clang++ -c -fblocks -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

typedef void (^foo)();
const foo &bar = ^{
};
