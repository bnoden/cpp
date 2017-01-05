/*
1. String Length 
Write a function that returns an integer and accepts a pointer to a C-string as an argu-
ment. The function should count the number of characters in the string and return that 
number.  Demonstrate  the  function  in  a  simple  program  that  asks  the  user  to  input  a  
string, passes it to the function, and then displays the function’s return value. 
*/

#include <iostream>
using namespace std;

int charCount(char*);

void main() {
	const int MAX = 256;
	char input[MAX];

	cout << "Enter a string: ";
	cin.getline(input, MAX);

	cout << endl;
	cout << "Character count: " << charCount(input) << endl;

	cout << endl;
	return; 
}

int charCount(char* ptr) {
	int count = 0;

	while (*ptr) {
		count++;
		ptr++;
	}
	return count;
}