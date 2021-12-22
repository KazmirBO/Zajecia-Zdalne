#include "CsNaglowek 1.cpp"
#include "CsNaglowek 1.h"
#include "Naglowek 1.h"
#include <iostream>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  CsStudent student("Jan Iksinski", "2019CS134", 2019);
  student.setMathHours(11);
  student.setCsHours(20);
  student.setGenEdHours(40);
  std::cout << "Student: " << student.getName() << " musi jeszcze odbyc "
            << student.getRemainingHours()
            << " godzin, aby przystapic do sesji." << std::endl;
  nl;
  return 0;
}
