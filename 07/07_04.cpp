/*
4. Larger Than n
In a program, write a function that accepts three arguments: an array, the size of the 
array, and a number n. Assume that the array contains integers. The function should 
display all of the numbers in the array that are greater than the number n. 
*/

#include <iostream>
using namespace std;

void LargerThan(int[], int, int);

// TEST
int main() {
	const int SIZE = 10;
	int num[SIZE];
	int number;

	cout << "Enter 10 numbers." << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "Number " << i+1 << ": ";
		cin >> num[i];
	}

	cout << "\nNow enter your \"special number\": ";
	cin >> number;

	cout << "\nThe following numbers are greater than your \"special number\": " << endl;
	
	LargerThan(num, SIZE, number);

	cout << endl;

	return 0;
}

void LargerThan(int arr[],int size,int n) {
	for (int i = 0; i < size; i++) {
		if (arr[i] > n) {
			cout << arr[i] << endl;
		}
	}
}