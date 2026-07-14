// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: checkSpecificValidity
// EXPECT-CRASH-ASSERT: ValidArg
// EXPECT-CRASH-ASSERT: constraint

struct sockaddr;
using socklen_t = unsigned;
typedef decltype(sizeof(int)) size_t;
typedef float ssize_t;
ssize_t recvfrom(int socket, void *buffer, size_t length, int flags,
                 struct sockaddr *address, socklen_t *address_len);

int bar(void);
void foo() { bar(); }
