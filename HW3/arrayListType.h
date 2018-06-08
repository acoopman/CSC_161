//Aidan Coopman HW3 6-7-18
#ifndef ARRAYLISTTYPER_H
#define ARRAYLISTTYPER_H

#include <iostream>

using namespace std;
class arrayListType
{
 public:
  
  arrayListType(int size = 128);
  ~arrayListType();

  void insertEnd(int num);

  //this is a pure virtual function
  virtual int min() = 0;
  
  void print();
  int getCount();
  int getElement(int i);
  
 private:

  int * list;
  int count;
  int max_size;
};

#endif

