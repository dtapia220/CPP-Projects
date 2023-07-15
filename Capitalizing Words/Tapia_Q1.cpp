/*
 * Tapia_Q1.cpp
 *
 *  Created on: Apr 28, 2020
 *      Author: dtapia
 */


#include "Tapia_Q1.h"

int main(){

	cout << "*************************************** "
	"\n* PROGRAMMED BY : Diego Tapia"
	"\n* CLASS         : CSC2400 C++ For Java Developer"
	"\n* SECTION       : MWF: 02:35 � 03:40pm SP2020"
	"\n* ASSIGNMENT#   : Final Exam - TakeHome       "
	"\n**************************************** ";

	char word[100];
	string pWord;
	string uWord;
	CharConverter userString;

	//Asks for a string
	cout << "\nEnter a string: ";

	cin.getline(word,100);

	//Capitalizes the letters in the string and displays it
	uWord = userString.uppercase(word);
	cout << uWord << endl;

	//Capitalizes the first letter of each word in a string and displays it
	pWord = userString.properWords(word);
	cout << pWord << endl;






	return 0;
}

