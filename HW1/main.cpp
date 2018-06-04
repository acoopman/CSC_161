//main.cpp
// Aidan Coopman 6/4/18 HW1 Chapter 10 Program 


#include "swimmingPool.h"
#include <iostream>

using namespace std;

int main()
{

   /*
     Test 1:
     use the default constructor will initialize the pool to these sizes:
     
     length = 30;
     width = 15;
     depth = 8;
     rate_fill = 10;
     rate_drain = 5;
     current_volume = 0;
   */
  try
    {
      cout << "Test 1\n";
      swimmingPool pool;
      
      //get current pool specs 
      cout << pool << endl;
      
      //set current volume to 2900 -> this is in cubic feet
      cout << "Fill the pool to 2900 f^3 and lets get info\n";
      pool.setCurrentVolume(2900);
      cout << pool << endl;

      //lets drain the pool for an hour
      cout << "Drain the pool for an hour (60 minutes) and get info \n";
      pool.emptyPool(60);
      cout << pool << endl;
      
    }
  catch (int error_int)
    {
      cout << "An exeception of value " << error_int << " was thrown.\n";
    }
	
  //---------------------------------------

   try
    {
      cout << "Test 2\n";
      	  /*
	    sets the pool: 
	    length = 15;
	    width = 25;
	    depth = 6;
	    rate_fill = 11;
	    rate_drain = 5.5;
	    current_volume = 0;
	  */
      swimmingPool pool2(15,25,6,11,5.5);
      //show the specs of Test 2 pool
      cout << pool2 << endl;

      //fill pool for 10 minutes
      cout << "fill the pool for 10 minutes then get info\n";
      pool2.fillPool(10);
      cout << pool2 << endl;
    }
   catch (int error_int)
     {
       cout << "An exeception of value " << error_int << " was thrown.\n";
     }
   //---------------------------------------------------------------------------
      try
    {
      cout << "Test 3\n";
      swimmingPool pool3(15,25,6,11,5.5);
      cout << "Fill the pool to 9000 f^3 and make sure it throws an exception\n";
      pool3.setCurrentVolume(9000);
    }
   catch (int error_int)
     {
       cout << "An exeception of value " << error_int << " was thrown.\n";
     }

	
	return 0;
}

