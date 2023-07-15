//============================================================================
// Name        : Assignment01.cpp
// Author      : Diego Tapia
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//declares variable
	double annual = 39000,

		//Calculates the bimonthly and biweekly earnings by dividing the annual
			   BiMonthly = annual / 24,
			   BiWeekly  = annual / 26;

		// Displays the annual, bimonthly, and biweekly earnings
		cout << "Annual earnings are $" << annual << endl;
		cout << "Bi-monthly earnings are $" << BiMonthly << endl;
		cout << "Bi-weekly earnings are $" << BiWeekly << endl;

		return 0;
}
