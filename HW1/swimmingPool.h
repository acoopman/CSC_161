#ifndef  SWIMMING_POOL_H
#define  SWIMMING_POOL_H

#include <iostream>

/*
Chapter 10 Program:

Review the General Programming Assignment instructions.
Write the definition of a class, swimmingPool, to implement the properties of a swimming pool.
Your class should have the instance variables to store the length (in feet), width (in feet), depth (in feet), the rate (in gallons per minute)
at which the water is filling the pool, and the rate (in gallons per minute) at which the water is draining from the pool.
Add appropriate constructors to initialize the instance variables.

Also, add member functions to do the following:

1) determine the amount of water needed to fill an empty or partially filled pool, 
2) determine the time needed to completely or partially fill or empty the pool,
3) and add or drain water for a specific amount of time.
This program must have a main program that utilizes a header file that defines the class and an implementation file containing the 
constructions and functions used in the class definitions.
*/

using namespace std;

	class swimmingPool
	{
	public:
		//default constructor
		swimmingPool();
		//constructor that initiziles starting values
		swimmingPool(float length_in, float width_in, float depth_in, float rate_fill_in, float rate_drain_in);
		~swimmingPool();
		//determine the amount of water needed to fill an empty or partially filled pool:
		float waterNeeded();
		//determine the time needed to completely or partially fill or empty the pool:
		float time2fill();
		float time2empty();
		//and add or drain water for a specific amount of time.
		void  fillPool(float minutes);
		void  emptyPool(float minutes);
		  
		void  setCurrentVolume(float in )
		{ if(in > total_volume)
		    throw 1;
		  current_volume = in;
		}

		//overload the operator (<<)
		friend ostream& operator <<(ostream& out, swimmingPool& theObject);
		
	private:
		float length; //in feet
		float width;
		float depth;
		float rate_fill; //gallons per minute
		float rate_drain; //gallons per minute
		//7.48 gallons in cubic foot
		float total_volume;//in cubic feet
		float current_volume;
	};

#endif
