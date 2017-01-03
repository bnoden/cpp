/*
2. Roman Numeral Converter 
Write a program that asks the user to enter a number within the range of 1 through 
10. Use a switch statement to display the Roman numeral version of that number. 
	Input Validation: Do not accept a number less than 1 or greater than 10.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void main() {
	int num = 0;
	string romanNum;

	while (num < 1 || num > 10) {
		cout << "Enter number between 1 and 10: ";
		cin >> num;
	}

	switch (num) {
	case 1:romanNum = "I"; break;
	case 2:romanNum = "II"; break;
	case 3:romanNum = "III"; break;
	case 4:romanNum = "IV"; break;
	case 5:romanNum = "V"; break;
	case 6:romanNum = "VI"; break;
	case 7:romanNum = "VII"; break;
	case 8:romanNum = "VIII"; break;
	case 9:romanNum = "IX"; break;
	case 10:romanNum = "X"; break;
	default:romanNum = "";
	}

	cout << "\nThe Roman Numeral for " << num << " is " << romanNum << "." << endl;
	cout << "\nGoodbye." << endl;

	return; 
}