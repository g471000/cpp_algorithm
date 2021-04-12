#include <iostream>

using namespace std;

string notations = {"", "thousand", "million", "billion", "trillion", "quadrillion", "quintillion", "sextillion", "septillion", "octillion"};
string notations_zero_tweenty = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
string notations_after_tweenty = {"thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string numberToEnglish(string number){
	int len = number.length();
	int numNotation = number.length() / 3; 
	int start = 0
	int end = len % 3 == 0 ? 2 : len % 3 == 1 ? 0 : 1; 

	string result = "";
	while(start < len){
		if(end - start == 2){
			int hundredDigit = number.at(start);	

		}	

		start = end - 1;
		end -= 3;
	}	
}




