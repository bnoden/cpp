/*
1. Largest/Smallest Array Values 
Write a program that lets the user enter 10 values into an array. The program should 
then display the largest and smallest values stored in the array. 
*/

#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
	int numbers[SIZE];
	int min, max;

	cout << "Enter 10 numbers." << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "Number " << i+1 << ": ";
		cin >> numbers[i];
	}

	min = numbers[0];
	max = numbers[0];

	for (int i = 0; i < SIZE; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
		if (min > numbers[i]) {
			min = numbers[i];
		}
	}

	cout << "\nThe largest number is " << max << endl;
	cout << "The smallest numbers is " << min << endl;
	cout << "\nHave a nice day. Goodbye." << endl;

	return 0;
}