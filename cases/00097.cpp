// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getIdentifierInfo
// EXPECT-CRASH-ASSERT: isAnnotation
// EXPECT-CRASH-ASSERT: token 

#if(_Pragma("pack(push)"))
