//Aidan Coopman HW3 6-7-18
#include "arrayListType.h"

//-------------------------------------
arrayListType::arrayListType(int size)
{
  count = 0;
  list = new int[size];
  max_size = size;
}
//-------------------------------------
arrayListType::~arrayListType()
{
  delete [] list;
}
//-------------------------------------
void arrayListType::insertEnd(int num)
{
  if(count >= max_size)
    throw 1;
  
  list[count++] = num;
}
//--------------------------------------
void arrayListType::print()
{
  for(int i = 0; i < count; i++)
    cout << list[i] << ", ";
}
//--------------------------------------
int arrayListType::getCount()
{
  return count;
}
//--------------------------------------
int arrayListType::getElement(int i)
{
  //check boundaries
  if( (i < 0) || (i >= count) )
    throw 2;
  return list[i];
}
//-------------------------------------
