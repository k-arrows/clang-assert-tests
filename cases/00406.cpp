// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: normalizeName
// EXPECT-CRASH-ASSERT: AttributeCommonInfo

[[gnu::uuid("hidden")]] class C {
} c;
