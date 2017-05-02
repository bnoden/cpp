/*
11. Array Expander 
Write a function that accepts an int array and the array’s size as arguments. The func-
tion should create a new array that is twice the size of the argument array. The func-
tion should copy the contents of the argument array to the new array and initialize the 
unused elements of the second array with 0. The function should return a pointer to 
the new array. 
*/

#include <iostream>
using namespace std;

int* expand(int[], int);

int main() {
	int array1[] = {111111,22222,3333,444,55,6};
	int count = 0;

	cout << "Array 1: " << endl;
	for (int index : array1) {
		cout << count+1 << ": " << index << endl;
		count++;
	}

	int* array2;
	array2 = expand(array1, count);

	cout << "\nArray 2: " << endl;
	for (int i = 0; i < count+count; i++) {
		cout << i+1 << ": " << array2[i] << endl;
	}
	
	delete [] array2;
	cout << endl;

	return 0; 
}

int* expand(int arr[], int size) {
	int* arr2 = nullptr;
	arr2 = new int[size+size];

	for (int i = 0; i < size+size; i++) {
		arr2[i] = i < size ? arr[i] : 0;
	}
	return arr2;
}