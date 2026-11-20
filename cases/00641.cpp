// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: TryObjectArgumentInitialization
// EXPECT-CRASH-ASSERT: isRecordType

void foo() {
  _Atomic auto L = [&](auto arg1) {};
  [&](auto arg2) { L.operator()(arg2); }(0);
}
