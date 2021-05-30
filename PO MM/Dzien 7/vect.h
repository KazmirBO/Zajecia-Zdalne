#include <ostream>
#ifndef VECT_H
#define VECT_H
class Vector{
private:
  double x;
  double y;
  double mag;
  double ang;
  char mode;
public:
  void set_x();
  void set_y();
  void set_mag();
  void set_ang();
  Vector();
  Vector(double n1, double n2, char form='r');
  void set(double n1, double n2, char form='r');
  ~Vector();
  double xval() const{ return x; }
  double yval() const{ return y; }
  double magval() const{ return mag; }
  double angval() const{ return ang; }
  void polar_mode();
  void rect_mode();
  // Przeciazanie
  Vector operator+(const Vector &b) const;
  Vector operator-(const Vector &b) const;
  Vector operator-()const;
  Vector operator*(double n) const;
  friend Vector operator*(double n, Vector &a);
  friend std::ostream &operator<<(std::ostream &os, const Vector &v);
};
#endif
