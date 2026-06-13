// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

_Static_assert(__atomic_is_lock_free(4, (_Atomic(__int128) *)-4), "");
