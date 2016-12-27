/*
1. Sum of Numbers 
Write a program that asks the user for a positive integer value. The program should use 
a loop to get the sum of all the integers from 1 up to the number entered. For example, 
if the user enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50. 
Input Validation: Do not accept a negative starting number.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void main() {
	int intVal = -1, sum = 0;
	
	while (intVal < 1) {
		cout << "Enter a positive integer: ";
		cin >>intVal;
	}

	for (int i = 1; i <= intVal; i++) {
		sum+=i;
	}

	cout << "\nThe sum of the numbers from 1 to " << intVal << " is " << sum << endl;
	cout << endl;
	return;
}
