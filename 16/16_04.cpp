/*
4. Absolute Value Template 
Write a function template that accepts an argument and returns its absolute value. The 
absolute value of a number is its value with no sign. For example, the absolute value of 
-5 is 5, and the absolute value of 2 is 2. Test the template in a simple driver program. 
*/

#include <iostream>

using namespace std;

template <class T>
T absolute(T val) {
	return val >= 0 ? val : -1*val;
}

void main() {
	double num;

	cout << "Enter positive or negative number: ";
	cin >> num;
	cout << endl;

	cout << "The absolute value of " << num << " is " << absolute(num) << endl;

	cout << endl;
	return; 
}
