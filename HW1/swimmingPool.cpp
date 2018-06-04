#include "swimmingPool.h"
#include <iostream>

using namespace std;

//------------------------------------------------------------------------------------------------------
swimmingPool::swimmingPool()
{
  //cout << "In the constructor\n";
  length = 30;
  width = 15;
  depth = 8;
  rate_fill = 10;
  rate_drain = 5;
  total_volume = length*width*depth; //in cubic feet
  current_volume = 0;
}
//------------------------------------------------------------------------------------------------------
swimmingPool::swimmingPool(float length_in, float width_in,float depth_in,
			   float rate_fill_in, float rate_drain_in)
{
  length = length_in;
  width = width_in;
  depth = depth_in;
  rate_fill = rate_fill_in;
  rate_drain = rate_drain_in;
  total_volume = length*width*depth;
  current_volume = 0;
  
}
//------------------------------------------------------------------------------------------------------
swimmingPool::~swimmingPool()
{
  //	cout << "In the destructor\n";
}
//------------------------------------------------------------------------------------------------------
float swimmingPool::waterNeeded()
{
  float water;
  water = (total_volume - current_volume)*7.48f; 
  return water;
}
//------------------------------------------------------------------------------------------------------
float swimmingPool::time2fill()
{
  float time=0;
  //cubic feet to gallons
  time = ((total_volume-current_volume)*7.48f)/rate_fill; 
  return time;
}
//------------------------------------------------------------------------------------------------------
float swimmingPool::time2empty()
{
  float time=0;
  time = (current_volume*7.48f)/rate_drain; 
  return time;
}

void swimmingPool::emptyPool(float minutes)
{
  float gallons_emptied = minutes*rate_drain;
  float cubic_feet_emptied = gallons_emptied/7.48f;
  current_volume -= cubic_feet_emptied;
  //if the current volume is less than 0, set the current volume to 0
  if(current_volume < 0) current_volume = 0;
}
void swimmingPool::fillPool(float minutes)
{
  float gallons_filled = minutes*rate_fill;
  float cubic_feet_filled = gallons_filled/7.48f;
  current_volume += cubic_feet_filled;
  //if the current volume is greater than the total volume, set the current volume to the total volume
  if(current_volume > total_volume) current_volume = total_volume;
}
//------------------------------------------------------------------------------------------------------
ostream& operator <<(ostream& out, swimmingPool& theObject)
{

  cout << "length = " << theObject.length << " feet" << endl;
  cout << "width  = " << theObject.width << " feet" << endl;
  cout << "depth  = " << theObject.depth << " feet" << endl;
  cout << "filling rate  = " << theObject.rate_fill << " gallons per min" << endl;
  cout << "draining rate  = " << theObject.rate_drain << " gallons per min" << endl;
  cout << "total volume  = " << theObject.total_volume << " cubic feet" << endl;
  cout << "current volume  = " << theObject.current_volume << " cubic feet" << endl;
  cout << "water needed to fill the pool = " << theObject.waterNeeded() << " gallons" << endl;
  cout << "time left to fill pool = " << theObject.time2fill() << " minutes" << endl;
  cout << "time left to empty pool = " << theObject.time2empty() << " minutes" << endl;
  
  return out;
}
//------------------------------------------------------------------------------------------------------
