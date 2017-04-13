/*
1. Minimum/Maximum 
Write a program that asks the user to enter two numbers. The program should use the 
conditional operator to determine which number is the smaller and which is the larger. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num1, num2, min, max;
	cout << "Enter an integer: ";
	cin >> num1;
	cout << "Enter another integer: ";
	cin >> num2;

	min = num1 > num2 ? num2 : num1;
	max = min == num1 ? num2 : num1;

	cout << "\nThe smaller number is " << min << " and the larger number is " << max << "." << endl;

	return 0;
}
