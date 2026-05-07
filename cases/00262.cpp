// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getFileIDLoaded
// EXPECT-CRASH-ASSERT: SLocOffset

template <typename T> constexpr void foo() {}

void bar(int x) {
  [[assume([]{
    return true; ())]];
    foo<>();
    [[assume()]] {}
