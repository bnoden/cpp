/*
1. Iterative Factorial 
Write an iterative version (using a loop instead of recursion) of the factorial function 
shown in this chapter. Test it with a driver program. 
*/

#include <iostream>

using namespace std;

int factorial(int);

void main() {
	int number;

	cout << "Enter an integer value and I will display\n";
	cout << "its factorial: ";
	cin >> number;

	cout << "The factorial of " << number << " is ";
	cout << factorial(number) << endl;

	return; 
}

int factorial(int n) {
	int f = n == 0 ? 1 : n;
	
	if (n != 0) {
		for (int i = 1; i < n; i++) {
			f*=(n-i);
		}
	}

	return f;
}