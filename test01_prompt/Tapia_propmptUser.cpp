/*
 * Tapia_propmptUser.cpp
 *
 *  Created on: Feb 20, 2020
 *      Author: dtapia
 */

#include <iostream>

using namespace std;

int main(){
	 	 //declares variable and prompts user for data
		int num;
	    cout << "Enter a number: ";
	    cin >> num;

	    //While loop it stops when num is above 50
	    while (num <= 50)
	    {
	    	//Displays the number before being multiplied by 2
	    	cout << num << endl;
	    	num = num * 2;
	    }
	    //displays the final result
	    cout << num << endl;
	    return 0;
}


