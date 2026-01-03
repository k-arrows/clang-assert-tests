// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: HasAccess
// EXPECT-CRASH-ASSERT: AS_private
// EXPECT-CRASH-ASSERT: AS_protected

struct {
:( struct S;
   int foo () { S; }; );
}
