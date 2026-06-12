// RUN: clang++ -c -std=c++03 %s
// EXPECT-CRASH-NOASSERT

double foo = __builtin_structured_binding_size(double);
