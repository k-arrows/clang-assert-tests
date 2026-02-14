// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: Align
// EXPECT-CRASH-ASSERT: Value
// EXPECT-CRASH-ASSERT: must

_Static_assert(__atomic_always_lock_free(0.9, (void *)-1), "");
