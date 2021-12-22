#ifndef NAGLOWEK_1_H
#define NAGLOWEK_1_H
#include <iostream>
class Student {
protected:
  std::string name;
  std::string idNumber;
  int yearAdmitted;

public:
  Student() {
    name = "";
    idNumber = "";
    yearAdmitted = 0;
  }
  Student(std::string n, std::string id, int year) { set(n, id, year); }
  void set(std::string n, std::string id, int year) {
    name = n;
    idNumber = id;
    yearAdmitted = year;
  }
  const std::string getName() const { return name; }
  const std::string getId() const { return idNumber; }
  int getYearAdmitted() const { return yearAdmitted; }
  virtual int getRemainingHours() const = 0;
};
#endif
