// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getSourceIndex
// EXPECT-CRASH-ASSERT: isValid
// EXPECT-CRASH-ASSERT: ParamIdx
	
void *f(int, int)
  __attribute__((ownership_returns(used)))
  __attribute__((ownership_returns(foo, 2)));
