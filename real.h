#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <sstream>
#include <string>
#include <ctime>

class Real {

private:

  int intPart;
  int fractionPart;

public:

  Real(int intPart = 0, int fractionPart = 0)
    : intPart(intPart), fractionPart(fractionPart) {}

  Real(const char *str) {
    this->intPart = std::atoi(str);
    size_t sepIndex = std::string(str).find('.') + 1;
    this->fractionPart = sepIndex ? std::atoi(str + sepIndex) : 0;
  }

  std::string toString() const {
    std::stringstream ss;
    ss << this->intPart << '.' << this->fractionPart;
    return ss.str();
  }

  Real & operator+=(const Real &rhs) {
    int tmp = this->fractionPart + rhs.fractionPart;
    this->intPart += rhs.intPart + tmp / 1000;
    this->fractionPart = tmp % 1000;
    return *this;
  }

  Real & operator-=(const Real &rhs) {
    int tmp = this->fractionPart - rhs.fractionPart;
    return *this;
  }

  Real & operator*=(const Real &rhs) {
    return *this;
  }

  Real & operator/=(const Real &rhs) {
    return *this;
  }

  friend const Real operator+(const Real &, const Real &);
  friend const Real operator-(const Real &);
  friend const Real operator-(const Real &, const Real &);
  friend const Real operator*(const Real &, const Real &);
  friend const Real operator/(const Real &, const Real &);
  friend std::ostream & operator<<(std::ostream &, const Real &);

};

#endif