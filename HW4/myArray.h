//myArray.h - written by Aidan Coopman
//This assignment is modified from CS 160 and I just added 2
// new constructors and overloaded the [] operator
#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_LIST_SIZE = 50;

class myArray
{
	public:
		myArray();
		myArray(int elements);
		myArray(int start_index, int end_index);
		~myArray();
        
		int    getSize();
		int    getLast();
		void   deleteLast();
		int    getValue(int idx);
		void   addValue(int temp);
		bool   full();
		friend ostream& operator << (ostream& out, const myArray& theObject);
	        int&   operator [] (int x);

	private:
		int list[MAX_LIST_SIZE];
		int startIndex;
		int size;		
};



#endif
