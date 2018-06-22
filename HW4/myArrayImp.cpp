//myArrayImp.cpp - written by Aidan Coopman
//This assignment is modified from CS 160 and I just added 2
// new constructors and overloaded the [] operator
#include "myArray.h"

//---------------------------------------------------------------------------
myArray::myArray()
{
  startIndex = 0;
  size = 0;
}
//---------------------------------------------------------------------------
myArray::myArray(int elements)
{
  startIndex = 0;
  size = elements;
  for(int i =0; i < size; i++)
    list[i] = 0;
}
//---------------------------------------------------------------------------
myArray::myArray(int start_index, int end_index)
{
  startIndex = start_index;
  size = end_index - start_index;
  for(int i =0; i < size; i++)
    list[i] = 0;
}
//---------------------------------------------------------------------------
myArray::~myArray()
{
  size = 0;
}
//---------------------------------------------------------------------------
int myArray::getSize()
{
  return size;	 	
}
//---------------------------------------------------------------------------
int myArray::getValue(int idx)
{
  int value;
  //need to get if idx is >= 0  and idx < MAX_LIST_SIZE
  if((idx >= 0) && (idx < MAX_LIST_SIZE))
    {
      value = list[idx];
    }
  else
    {
      cout << "invalid index\n";
      exit(1);
    }
  
  return value;	 
}
//---------------------------------------------------------------------------
int  myArray::getLast()
{
  
  //if size > 0
  if(size >0)
    {
      return list[size-1];	
    }
  
  else
    {
      cout << "the list is empty\n";
      exit(1);
    }
}
//---------------------------------------------------------------------------
void myArray::addValue(int temp)
{
  if(full())
    {
      cout << "Error: adding to a full list.\n";
      exit(1);	
    }	
  else
    {
      list[size++] = temp;
      //size = size + 1;
    }
}
//---------------------------------------------------------------------------
void myArray::deleteLast()
{
  if(size >0)
    {
      list[size-1]=0;
      size--;
    }
}
//---------------------------------------------------------------------------
bool myArray::full()
{
  return (size == MAX_LIST_SIZE);
}
//---------------------------------------------------------------------------
ostream& operator <<(ostream& out, const myArray& theObject)
{
  for(int i=0; i<theObject.size; i++)
    out << theObject.list[i] << endl;
  return out;
}
//---------------------------------------------------------------------------
int&   myArray::operator [] (int x)
{
  x= x-startIndex;
  if((x<0)||(x>=size))
    {
      cout << "invalid index ";
      exit(1);
    }
  return list[x];
}
