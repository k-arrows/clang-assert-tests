// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: checkFormatExpr
// EXPECT-CRASH-ASSERT: NoMatchPromotionTypeConfusion

template <typename... Args>
void foo(const char *fmt, Args &&...args) __attribute__((format(printf, 1, 2)));

void bar() { foo("%c \n", L'c'); }
