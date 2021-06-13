#include <iostream>
#include "CsNaglowek 1.h"
#include "Naglowek 1.h"
int CsStudent::getRemainingHours() const{
  int reqHours, remainingHours;
  reqHours=MATH_HOURS+CS_HOURS+GEN_ED_HOURS;
  remainingHours=reqHours-(mathHours+csHours+genEdHours);
  return remainingHours;
}
