//Aidan Coopman HW3 6-7-18
#include "unorderedArrayListType.h"

int unorderedArrayListType::min()
{
  int min = getElement(0); 
  for(int i = 1; i < getCount(); i++)
    {
      int value = getElement(i);
      if(value<min)
	   min = value;
    }
  return min;
} 


