//dateType.cpp written by Aidan Coopman
#include <iostream>
#include "dateType.h"

using namespace std;

//-----------------------------------------------------------------
dateType::dateType(int month, int day, int year)
{
  setDate(month, day, year);
}
//-----------------------------------------------------------------
bool dateType::isLeapYear() 
{
  if((dYear%4)==0)
    return 1;
  else
    return 0;
}
//-----------------------------------------------------------------
void dateType::setDay(int day_in)
{
  if((day_in > daysOfCurrentMonth())||(day_in < 1))
    throw 1;
  else
    dDay = day_in;
}
//-----------------------------------------------------------------
void dateType::setMonth(int month_in)
{
  if((month_in > 12)||(month_in<1))
    {
      throw 2;
    }
  dMonth = month_in;
}
//-----------------------------------------------------------------
void dateType::setYear(int year_in)
{
  if(year_in<0)
    {
      throw 3;
    }
  dYear = year_in;  
}
//--------------------------------------------------------------------
void dateType::setDate(int month, int day, int year)
{
  setMonth(month);

  setYear(year);
  
  setDay(day);
}
//--------------------------------------------------------------------
int dateType::daysOfCurrentMonth()
{
  return daysOfMonth(dMonth);
}
//--------------------------------------------------------------------
int dateType::daysOfMonth(int month)
{
  int days;
  if( (month == 4) || (month == 6) || (month == 9) || (month == 11))
    {
      days = 30;
    }
  else if(month == 2)
    {
      days = 28;
      if(isLeapYear())
	days = 29;
    }
  else
    days = 31;

  return days;
}
//-----------------------------------------------------------------
int dateType:: daysRemaining()
  {
    int totalDays = 365;
    if(isLeapYear())
      totalDays = 366;

    int days_left = totalDays - daysPassed();
    return days_left;
  }
//-----------------------------------------------------------------
int dateType::daysPassed()
{
  int total_days_passed = 0;
  for(int i =1; i < dMonth; i++)
    {
      total_days_passed += daysOfMonth(i);
    }
  //include this data
  total_days_passed += dDay;
  return total_days_passed;
}
//-----------------------------------------------------------------
void dateType::addDays(int days_adding)
{
  int days_left=daysOfCurrentMonth() - dDay;
  if(days_adding > days_left)
    {
      dMonth++;
      dDay = days_adding - days_left;
    }
  else
    dDay+=days_adding;

  //if the month is 13 we have to go to the next year
  if(dMonth == 13)
    {
      dMonth = 1;
      dYear++;
    }
}
//-----------------------------------------------------------------
int dateType::getDay() const
{
  return dDay;
}
//-----------------------------------------------------------------
int dateType::getMonth() const
{
  return dMonth;
}
//-----------------------------------------------------------------
int dateType::getYear() const
{
  return dYear;
}
//-----------------------------------------------------------------
void dateType::printDate() const
{
  cout << dMonth << "-" << dDay << "-" << dYear <<endl;
}
//-----------------------------------------------------------------
