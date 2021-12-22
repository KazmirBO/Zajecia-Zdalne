#ifndef CSNAGLOWEK_1_H
#define CSNAGLOWEK_1_H
#include "Naglowek 1.h"
#include <iostream>
const int MATH_HOURS = 20;
const int CS_HOURS = 40;
const int GEN_ED_HOURS = 60;
class CsStudent : public Student {
private:
  int mathHours;
  int csHours;
  int genEdHours;

public:
  CsStudent() : Student() { mathHours = csHours = genEdHours = 0; }
  CsStudent(std::string n, std::string id, int year) : Student(n, id, year) {
    mathHours = csHours = genEdHours = 0;
  }
  void setMathHours(int mh) { mathHours = mh; }
  void setCsHours(int csh) { csHours = csh; }
  void setGenEdHours(int geh) { genEdHours = geh; }
  virtual int getRemainingHours() const;
};
#endif
