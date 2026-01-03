// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnBlockArguments
// EXPECT-CRASH-ASSERT: isFunctionType
// EXPECT-CRASH-ASSERT: GetTypeForDeclarator

#define VS(N) __attribute__((__vector_size__(N)))

void (^foo)(char *) = ^(char *)VS(64){
};
