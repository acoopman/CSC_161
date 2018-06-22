#include <iostream>
#include <string>
#include "invalidHr.h"
#include "invalidMin.h"
#include "invalidSec.h"

using namespace std;

int getHours();
int getMinutes();
int getSeconds();
void print24HourTime(int hr, int min, int sec, string str);

int main ()
{
  int hours;
  int minutes;
  int seconds;
  
  string str;
  
  hours = getHours();
  minutes = getMinutes();
  seconds = getSeconds();
  
  cout << "Enter AM or PM: ";
  cin >> str;
  cout << endl;
  
  cout << "24 hour clock time: ";
  print24HourTime(hours, minutes, seconds, str);
  
  system("pause");
  return 0;                                        
}

int getHours()
{
  bool done = false;                               
  int hr = 0;
  
  do                                               
    {                                                
      
      try                                          
	{                                            
	  cout << "Enter hours: ";    
	  cin >> hr;                          
	  cout << endl;   
	  
	  if (hr < 0 || hr > 12)
	    throw invalidHr();
	  
	  done = true;      
	}   
      
      catch (invalidHr hrObj)
	{
	  cout << hrObj.what() << endl;
	}
      
    }
  while (!done);      
  
  return hr;
}

int getMinutes()
{
  bool done = false;                               
  int min = 0;
  
  do                                               
    {                                                
      try                                          
	{                                             
	  cout << "Enter minutes: ";    
	  cin >> min;                          
	  cout << endl;   
	  
	  if (min < 0 || min > 59)
	    throw invalidMin();
	  
	  done = true;       
	}   
      catch (invalidMin minObj)
	{
	  cout << minObj.what() << endl;
	}
      
    }
  while (!done);      
  
  return min;
}

int getSeconds()
{
  bool done = false;                               
  int sec = 0;
  
  do                                               
    {                                                
      try                                          
	{                                             
	  cout << "Enter seconds: ";    
	  cin >> sec;                          
	  cout << endl;   
	  
	  if (sec < 0 || sec > 59)
	    throw invalidSec();
	  
	  done = true;       
	}   
      catch (invalidSec secObj)
	{
	  cout << secObj.what() << endl;
	}
      
    }
  while (!done);      
  
  return sec;
}

void print24HourTime(int hr, int min, int sec, string str)
{
  if (str == "AM")
    {
      if (hr == 12)
	cout << 0;
      else
	cout << hr;
      
      cout << ":" << min << ":" << sec << endl;
    }
  else if (str == "PM")
    {
      if (hr == 12)
	cout << hr;
      else
	cout << hr + 12;
      
      cout << ":" << min << ":" << sec << endl;
    }
}
