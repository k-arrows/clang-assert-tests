// RUN: clang++ -c -O1 %s
// EXPECT-PASS

int a;
void foo() { auto p = new char[(long)&a]; }
