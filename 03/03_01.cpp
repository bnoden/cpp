/*
1. Miles per Gallon
Write a program that calculates a car’s gas mileage. The program should ask the user 
to enter the number of gallons of gas the car can hold and the number of miles it can 
be driven on a full tank. It should then display the number of miles that may be driven 
per gallon of gas. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int gallons = 0, miles = 0;

	while (gallons < 1) {
		cout << "Enter maximum fuel capacity: ";
		cin >> gallons;
	}

	while (miles < 1) {
		cout << "Enter number of miles driven on full tank: ";
		cin >> miles;
	}

	cout << "\nMPG: " << miles/gallons << endl;

	cout << "\nGoodbye." << endl;


	return 0; 
}