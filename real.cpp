#include "real.h"

const Real operator+(const Real &lhs, const Real &rhs) {
  return Real(lhs) += rhs;
}

const Real operator-(const Real &lhs) {
  return Real(-lhs.intPart, lhs.fractionPart);
}

const Real operator-(const Real &lhs, const Real &rhs) {
  return Real(lhs) -= rhs;
}

const Real operator*(const Real &lhs, const Real &rhs) {
  return Real(lhs) *= rhs;
}

const Real operator/(const Real &lhs, const Real &rhs) {
  return Real(lhs) /= rhs;
}

std::ostream & operator<<(std::ostream &os, const Real &number) {
  os << number.toString();
  return os;
}