/*
4. Charge Account Validation Modification 
Modify the program you wrote for Problem 1 (Charge Account Validation) so it per-
forms a binary search to locate valid account numbers. Use the selection sort algorithm 
to sort the array before the binary search is performed.
*/

#include <iostream>
#include <string>
using namespace std;

void selectSort(int[], int);
bool binSearch(int[], int, int);

bool isValid = false;

void main() {
	
	string valid;
	int count = 0, input = 0;
	int validNums[] = {
		5658845,  4520125,  7895122,  8777541,  8451277,  1302850,
		8080152,  4562555, 5552012,  5050552,  7825877,  1250255,
		1005231,  6545231,  3852085,  7576651,  7881200,  4581002
	};

	for (int num : validNums) { count++; }

	selectSort(validNums, count);

	while (input < 1000000 || input > 9999999) {
		cout << "Enter your 7-digit account number: ";
		cin >> input;
	}

	binSearch(validNums, count, input);

	valid = isValid ? "VALID" : "INVALID";

	cout << "The number you entered is " << valid << "." << endl;

	return;
}

bool binSearch(int arr[],int size,int val) {
	int first = 0, last = size-1, mid, pos = -1;
	isValid = false;

	while (!isValid && first <= last) {
		mid = (first+last)/2;
		if (arr[mid] == val) {
			isValid = true;
			pos = mid;
		}
		else if (arr[mid] > val) { last = mid-1; }
		else { first = mid+1; }
	}
	return isValid;
}

void selectSort(int arr[],int size) {
	int minIndex, minVal;
	for (int i = 0; i < size-1; i++) {
		minIndex = i;
		minVal = arr[i];
		for (int j = i+1; j < size; j++) {
			if (arr[j] < minVal) {
				minVal = arr[j];
				minIndex = j;
			}
		}
		arr[minIndex] = arr[i];
		arr[i] = minVal;
	}
}