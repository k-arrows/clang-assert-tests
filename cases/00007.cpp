// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename _Tp> class complex;

template <> class complex<double> {
private:
  double val;
};

complex<double>::complex(double r, double i) {
  __real__ val = r;
  __imag__ val = i;
}
