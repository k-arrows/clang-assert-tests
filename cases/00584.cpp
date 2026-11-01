// RUN: clang++ -c -target aarch64 %s
// EXPECT-FAIL

using ullv16 = unsigned long long __attribute__((vector_size(16)));

__clang_svint8x4_t foo(ullv16 p) { return p; }
