// RUN: clang++ -c %s
// EXPECT-PASS

extern "C" {
__attribute__((used)) extern void *foo() { return 0; }
namespace NS {
__attribute__((used)) static void *foo() { return 0; }
} // namespace NS
}
