// RUN: clang++ -c -target powerpc64le-linux-gnu -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: Alloc
// EXPECT-CRASH-ASSERT: Desc

void *foo = new __vector_quad;
