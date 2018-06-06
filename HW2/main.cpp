//main.cpp
//// Aidan Coopman 6/6/18 HW2 Chapter 11 Program
#include "dateType.h"
#include <iostream>
#include "extDateType.h"
#include "calendarType.h"
using namespace std;

int main()
{
try
  {
    dateType date;    
    date.printDate();

    //check if its a leap year
    cout << "Leap year?";
    if(date.isLeapYear()==1)
      cout << " yes\n";
    else
      cout << " no\n";

    cout << "There are " << date.daysOfCurrentMonth() << " days in that month\n";
    cout << "There are " << date.daysPassed() << " days passed in the year\n";
    cout << "There are " << date.daysRemaining() << " days left in the year\n";

    dateType date2(12,21,2012);

    date2.printDate();
    date2.addDays(10);
    cout << " adding 10 days" << endl;
    date2.printDate();

    date2.addDays(5);
    cout << " adding 5 days" << endl;
    date2.printDate();
    
    //throwing an exception(wrong date)
     dateType date3(2,30,2012);
  }
 catch(int e)
   {
     cout << "exception with the value " << e << " was thrown\n";
   }
//-----------------------------------------------------------------------------------------
 extDateType date_ext;
 cout << "using the inheritance base class:\n"; 
  date_ext.printDate();


  calendarType cal;
   cout << "using the calendar class:\n"; 
  cal.printDate();
    return 0;
}

