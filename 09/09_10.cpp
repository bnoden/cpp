/*
10. Reverse Array 
Write a function that accepts an  
int
array and the array’s size as arguments. The func-
tion should create a copy of the array, except that the element values should be reversed 
in the copy. The function should return a pointer to the new array. Demonstrate the 
function in a complete program. 
*/

#include <iostream>
using namespace std;

int *reverse(int[],int);

void main() {
	int array1[] = {0,10,101,1010,10101,1010101,10101010};
	int count = 0;
	for (int index : array1) {
		cout << index << endl;
		count++;
	}

	int *array2;
	array2 = reverse(array1, count);

	for (int i = 0; i < count; i++) {
		cout << array2[i] << endl;
	}

	delete [] array2;

	return; 
}

int *reverse(int arr[],int size) {
	int *arr2 = nullptr;
	arr2 = new int[size];

	for (int i = 0; i < size; i++) {
		arr2[i] = arr[(size-1)-i];
	}

	return arr2;
}