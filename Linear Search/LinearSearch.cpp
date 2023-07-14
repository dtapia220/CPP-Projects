/*
 * LinearSearch.cpp
 *
 *  Created on: Apr 8, 2020
 *      Author: dtapia
 */
#include<iostream>
#include<string>

using namespace std;

int aprilLinearSearch(int[], int, int);  // mention of prototype

int main()
{
	const int arraySize = 80;
	int array_01[arraySize];  // created an array array_01 contains 80 elements

	int searchKey;  // value to be found


	int index;
	for(index = 0; index < arraySize; index++)
	{
		array_01[index] = 2.5 * index;  // Create some data
		cout <<"\nDisplay elements: "<<array_01[index];
	}
	
	
	// Prompt user for search value
	cout << "\nEnter integer to search for: ";
	cin >> searchKey;

	// attempt to find the search value in array array_01
	int element = aprilLinearSearch(array_01, searchKey, arraySize);

	//Display results
	if(element != -1)
	{
		cout << "Value was Found: " << searchKey << " at index: " << element << endl;
	}
	else {
		cout << "\nValue not found: " << endl;
	}

	return 0;
}

int aprilLinearSearch(int array[], int key, int sizeOfArray)
{
	for( int justin = 0; justin < sizeOfArray; justin++ )
	{
		if(array[justin] == key)
			return justin;
	}
	return -1;
}


