#ifndef REGRESJA_H
#define REGRESJA_H
struct punkt{
  float x;
  float y;
};
float odl(struct punkt A, struct punkt B);
float Sx(struct punkt t[],int n);
float Sy(struct punkt t[],int n);
#endif
