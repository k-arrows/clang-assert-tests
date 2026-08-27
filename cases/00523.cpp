// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-CRASH-NOASSERT

char a[] = {
#embed
};

char b[] = {
#embed __FILE__ prefix([sizeof(a) - 1])
};
