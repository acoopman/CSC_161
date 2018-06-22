//invalidHr.h
//written by Aidan Coopman
#ifndef INVALIDHR_H
#define INVALIDHR_H


#include <iostream>
#include <string>

using namespace std;

class invalidHr
{

 public:
  invalidHr() {};
  string what()
  {
    string out = "Wrong hour Entered\n";
    return  out;
  }
  
 private:
  
};




#endif
