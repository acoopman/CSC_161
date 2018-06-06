//calendarType.h written by Aidan Coopman
#ifndef CALENDARTYPE_H
#define CALENDARTYPE_H
#include <iostream>
#include "dateType.h"

using namespace std;

class calendarType: public extDateType
{
 public:
  void printDate();

 private:
  // Sunday=0, Monday=1 ...
  int startDayOfMonth();    
};

//Define the member functions
//---------------------------------------------------------------------------
// Algorithm:
// http://www.tondering.dk/claus/cal/chrweek.php#calcdow
int calendarType::startDayOfMonth()
{
  int year = getYear();
  int month =  getMonth();
  int day =  1;
  
  unsigned a, y, m;
  a = (14 - month) / 12;
  y = year - a;
  m = month + (12 * a) - 2;
  // Gregorian:
  int index =  (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
  
  return index;
}
//----------------------------------------------------------------------------------
void calendarType::printDate()
{
  extDateType::printDate();
  //  dateType::printDate();
  
  cout << "Sun Mon Tue Wed Thu Fri Sat \n" << endl;
  int idx = startDayOfMonth();
  int count = 1;
  for(int i = 0; i < daysOfCurrentMonth()+idx; i++)
    {
      if(i < idx)
	cout << "    ";
      else
	{
	  if(i<10)
	    cout << count << "   ";
	  else
	    cout << count << "  ";
	  count++;
	}
      
      if( ((i+1)%7) == 0)
	cout << endl;
    }
  cout << endl;  
}

#endif
