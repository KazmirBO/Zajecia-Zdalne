#include "vect.h"
#include <cmath>
#include <iostream>
const double Rad_to_deg = 57.2957795130823;
void Vector::set_mag() { mag = sqrt(x * x + y * y); }
void Vector::set_ang() {
  if (x == 0 && y == 0)
    ang = 0;
  else
    ang = atan2(y, x);
}
void Vector::set_x() { x = mag * sin(ang); }
void Vector::set_y() { y = mag * sin(ang); }
Vector::Vector() {
  x = y = mag = ang = 0;
  mode = 'r';
}
Vector::Vector(double n1, double n2, char form) {
  mode = form;
  if (form == 'r') {
    x = n1;
    y = n2;
    set_mag();
    set_ang();
  } else if (form == 'p') {
    mag = n1;
    ang = n2 / Rad_to_deg;
    set_x();
    set_y();
  } else {
    std::cout << "Nie znam takiego trybu!" << std::endl;
    Vector();
  }
}
void Vector::set(double n1, double n2, char form) {
  mode = form;
  if (form == 'r') {
    x = n1;
    y = n2;
    set_mag();
    set_ang();
  } else if (form == 'p') {
    mag = n1;
    ang = n2 / Rad_to_deg;
    set_x();
    set_y();
  } else {
    std::cout << "Nie znam takiego trybu!" << std::endl;
    Vector();
  }
}
Vector::~Vector() {}
void Vector::polar_mode() { mode = 'p'; }
void Vector::rect_mode() { mode = 'r'; }
Vector Vector::operator+(const Vector &b) const {
  return Vector(x + b.x, y + b.y);
}
Vector Vector::operator-(const Vector &b) const {
  return Vector(x - b.x, y - b.y);
}
Vector Vector::operator-() const { return Vector(-x, -y); }
Vector Vector::operator*(double n) const { return Vector(n * x, n * y); }
Vector operator*(double n, const Vector &a) { return a * n; }
std::ostream &operator<<(std::ostream &os, const Vector &v) {
  if (v.mode == 'r')
    os << "(x,y) = (" << v.x << "," << v.y << ")";
  else if (v.mode == 'p')
    os << "(m,a) = (" << v.mag << "," << v.ang * Rad_to_deg << ")";
  else
    os << "Niepoprawny tryb!" << std::endl;
  return os;
}
