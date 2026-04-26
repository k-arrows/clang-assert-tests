// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: castAs
// EXPECT-CRASH-ASSERT: CanonicalType

auto foo = [](auto a) __attribute__((__vector_size__(4))){};
