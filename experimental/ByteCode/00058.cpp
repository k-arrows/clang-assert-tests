// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: interp__builtin_strcmp
// EXPECT-CRASH-ASSERT: isPrimitiveArray

int strcmp(const char *, const char *);
#define S "\x01\x02"

const char _str[] = {S[0], S[1]};
const union u {
  int a;
  char b[2];
} _str2[] = {S[0], S[1]};

const int compared = strcmp(_str, (const char *)_str2);
