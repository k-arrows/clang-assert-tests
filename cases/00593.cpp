// RUN: clang++ -c -target powerpc64le-linux-gnu %s
// EXPECT-CRASH-ASSERT: areCompatibleVectorTypes
// EXPECT-CRASH-ASSERT: isVectorType
// EXPECT-CRASH-ASSERT: SecondVec

vector int foo(unsigned __int128 bar, vector unsigned char baz) {
  return (vector int)(bar + baz);
}
