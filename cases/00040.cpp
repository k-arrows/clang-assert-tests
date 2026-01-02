// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: skipRValueSubobjectAdjustments
// EXPECT-CRASH-ASSERT: isPRValue

class X {
  int &&i = (A().*f());
};
class Y : public X {};
Y y;
