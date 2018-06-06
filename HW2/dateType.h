//dateType.h modified by Aidan Coopman for HW 2
#ifndef DATETYPE_H 
#define DATETYPE_H

class dateType
{
 public:
  dateType(int month = 1, int day = 1, int year = 1900);
  void setDate(int month, int day, int year);
  int  getDay() const; 
  int  getMonth() const;
  int  getYear() const;
  void setDay(int day_in); 
  void setMonth(int month_in);
  void setYear(int year_in);
  
  void printDate() const;
  bool isLeapYear();
  int  daysOfCurrentMonth();
  int  daysPassed();
  int  daysRemaining();
  void addDays(int days);

    
 private:
  int dMonth;
  int dDay;
  int dYear;
  int daysOfMonth(int month);
  
};
 
#endif
