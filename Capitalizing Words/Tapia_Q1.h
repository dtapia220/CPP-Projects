/*
 * Tapia_Q1.h
 *
 *  Created on: Apr 28, 2020
 *      Author: dtapia
 */

#ifndef TAPIA_Q1_H_
#define TAPIA_Q1_H_

#include <iostream>
#include <string>

using namespace std;


class CharConverter{
public:
	CharConverter();

	string uppercase(string);
	string properWords(string);

private:


};

CharConverter::CharConverter(){

}

string CharConverter::uppercase(string input){
	string newString;

	for(int i = 0; i < input.size(); i++){
			if(input[i] >= 97 && input[i] < 123){
				input[i] = input[i] - 32;
			}
			newString += input[i];
		}

	return newString;
}

string CharConverter::properWords(string str){
	string newString;

		for(int i = 0; i < str.size(); i++){
			if((str[i] >= 97 && str[i] < 123) && (i == 0)){
				str[i] = str[i] - 32;
			}if (str[i] == ' '){
				str[i+1] = str[i+1] - 32;
			}
			newString += str[i];
		}

	return str;

}

#endif /* TAPIA_Q1_H_ */
