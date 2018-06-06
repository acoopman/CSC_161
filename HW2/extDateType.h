//extDateType.h written by Aidan Coopman
#ifndef EXTDATETYPE_H
#define  EXTDATETYPE_H

#include <iostream>
#include "dateType.h"

using namespace std;
class extDateType: public dateType
{
 public:
  
  void printDate()
  {
    month = months[getMonth()-1];
    cout << month.c_str() << " "  << getYear() <<endl;
  }
  
 private:
	string month;
	string months[12] = { "January", "Febuary", "March","April", "May",
			"June","July", "August", "September","October",
			"November", "December"};
  
};





#endif







