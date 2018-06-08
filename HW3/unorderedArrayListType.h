//Aidan Coopman HW3 6-7-18
#ifndef UNORDEREDARRAYLISTTYPE_H
#define UNORDEREDARRAYLISTTYPE_H

#include <iostream>
#include "arrayListType.h"

using namespace std;
class unorderedArrayListType : public arrayListType
{
 public:
 unorderedArrayListType(int size = 128) : arrayListType(size) { }
  
  //this is the virtual funcion of the base class arrayListType
  int min();
  
 private:
  
};

#endif
