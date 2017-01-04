/*
12. Element Shifter 
Write  a  function  that  accepts  an int array  and  the  array’s  size  as  arguments.  The  
function should create a new array that is one element larger than the argument array. 
The first element of the new array should be set to 0. Element 0 of the argument array 
should be copied to element 1 of the new array, element 1 of the argument array should 
be  copied  to  element  2  of  the  new  array,  and  so  forth.  The  function  should  return  a  
pointer to the new array. 
*/

#include <iostream>
using namespace std;

int* expandByOne(int[], int);

void main() {
	int array1[] = {1,2,3,4,5,6};
	int count = 0;

	cout << "Array 1: " << endl;
	for (int index : array1) {
		cout << count+1 << ": " << index << endl;
		count++;
	}

	int* array2;
	array2 = expandByOne(array1, count);

	cout << "\nArray 2: " << endl;
	for (int i = 0; i < count+1; i++) {
		cout << i+1 << ": " << array2[i] << endl;
	}

	cout << endl;
	delete [] array2;

	return; 
}

int* expandByOne(int arr[],int size) {
	int* arr2 = nullptr;
	arr2 = new int[size+1];

	arr2[0] = 0;

	for (int i = 0; i < size; i++) {
		arr2[i+1] = arr[i];
	}
	return arr2;
}