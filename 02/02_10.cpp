/*
10.  Miles per Gallon 
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a 
program that calculates the number of miles per gallon the car gets. Display the result 
on the screen. 
Hint: Use the following formula to calculate miles per gallon (MPG): 
MPG = Miles Driven/Gallons of Gas Used 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int milesDriven, gallonsUsed, milesPerGallon;

void main() {
	gallonsUsed = 15;
	milesDriven = 375;
	milesPerGallon = milesDriven / gallonsUsed;

	cout << "MPG: " << milesPerGallon << endl;

	return;
}