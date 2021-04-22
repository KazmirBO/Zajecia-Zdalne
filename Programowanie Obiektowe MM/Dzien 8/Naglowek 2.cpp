#include "Naglowek 2.h"
void Rectangle::setWidth(double w){
  if(w>=0) width=w;
  else throw UjemnyWidth(w); 
}
void Rectangle::setLength(double l){
  if(l>=0) length=l;
  else throw UjemnyLength(l);
}
