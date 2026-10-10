// RUN: clang++ -c %s
// EXPECT-FAIL

_Static_assert(__atomic_always_lock_free(0.9, (void *)-1), "");
