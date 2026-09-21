// RUN: clang++ -c -std=c++20 %s
// EXPECT-PASS

namespace std {
struct type_info;
}

template <bool B> struct X {};
template <typename T> void foo() { X<noexcept(typeid(*T{}))> x; }

namespace std {
struct type_info {};
} // namespace std

auto bar(auto Args) { return typeid(Args[0]); }
