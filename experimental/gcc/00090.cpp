// RUN: clang++ -c %s
// EXPECT-PASS

static void weakref() __attribute__((weakref("target")));

template <typename T> void foo(T) { [[gnu::section(".bar")]] static int baz; }
