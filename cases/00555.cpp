// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getArrayFiller
// EXPECT-CRASH-ASSERT: hasArrayFiller
// EXPECT-CRASH-ASSERT: No

constexpr wchar_t foo[0x800000000] = {
    L'f',
    L'o',
    L'o',
};

static_assert(__builtin_wcscmp(foo, foo), "");
