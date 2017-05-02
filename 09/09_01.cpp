/*
1. Array Allocator 
Write a function that dynamically allocates an array of integers. The function should 
accept an integer argument indicating the number of elements to allocate. The function 
should return a pointer to the array. 
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int *allocate(int);

int main() {
	int numInput = -1;
	int *numbers;

	while (numInput < 1) {
		cout << "Enter a positive integer: ";
		cin >> numInput;
	}

	numbers = allocate(numInput);

	for (int i = 0; i < numInput; i++) {
		cout << "numbers[" << i << "] = " << numbers[i] << endl;
	}

	delete [] numbers;

	cout << "\nAttempting to delete numbers..." << endl;
	for (int i = 0; i < numInput; i++) {
		cout << "numbers[" << i << "] = ";
		if (numbers[i] < 1) {
			cout << "NULL" << endl;
		}
		else if (numbers[i] > 0) {
			cout << numbers[i] << endl;
		}
	}

	return 0; 
}

int *allocate(int num) {
	int *arr = nullptr;

	if (num > 0) {
		arr = new int[num];
		srand(time(0));

		for (int i = 0; i < num; i++) { arr[i] = rand(); }
	}

	return arr;
}