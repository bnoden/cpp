/*
2. Recursive Conversion 
Convert the following function to one that uses recursion. 

void sign(int n) 
{ 
while (n > 0) 
cout << "No Parking\n"; 
n--; 
} 

Demonstrate the function with a driver program. 
*/

#include <iostream>

using namespace std;

void sign(int);

void main() {

	sign(4);

	return; 
}

void sign(int n) {
	cout << "No Parking\n"; 
	n--;

	if (n <= 0) { return; }
	else { sign(n); }
} 