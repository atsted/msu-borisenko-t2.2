#include "real.h"

int main (int argc, char **argv) {

  Real a(1, .041);
  Real b("2.21");
  Real c("-10.101");
  Real d(b * b - 4 * a * c);
  std::cout << "x1 = " << Real(-b + d.sqrt()) / 2 << std::endl;
  std::cout << "x2 =" << Real(-b - d.sqrt()) / 2 << std::endl;

  return 0;
}