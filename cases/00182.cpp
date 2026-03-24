// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: operator==
// EXPECT-CRASH-ASSERT: IsUnsigned
// EXPECT-CRASH-ASSERT: Signedness

void bar(int);

void foo()
{
  [[clang::code_align(64)]]
  [[clang::code_align(1024ULL)]]
  for(int i=0; i<128; i++) { bar(i); }
}
