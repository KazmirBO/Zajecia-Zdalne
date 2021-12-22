#ifndef NAGLOWEK_H
#define NAGLOWEK_H
class Rectangle {
private:
  double width;
  double length;

public:
  class UjemnyWidth {
  private:
    double value;

  public:
    UjemnyWidth(double val) { value = val; }
    double getValue() const { return value; }
  };
  class UjemnyLength {
  private:
    double value;

  public:
    UjemnyLength(double val) { value = val; }
    double getValue() const { return value; }
  };
  Rectangle() {
    width = 0;
    length = 0;
  }
  void setWidth(double);
  void setLength(double);
  double getWidth() const { return width; }
  double getLength() const { return length; }
  double getArea() const { return width * length; }
};
#endif
