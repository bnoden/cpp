/*
2. Backward String 
Write a function that accepts a pointer to a C-string as an argument and displays its 
contents  backward.  For  instance,  if  the  string  argument  is  “Gravity”  the  function  
should display “ytivarG”. Demonstrate the function in a program that asks the user 
to input a string and then passes it to the function. 
*/

#include <iostream>
using namespace std;

int charCount(char*);
void rcout(char*);

void main() {
	const int MAX = 256;
	char input[MAX];

	cout << "Enter a string:" << endl;
	cin.getline(input, MAX);

	rcout(input);

	cout << endl;

	return; 
}

void rcout(char* ptr) {
	int size = charCount(ptr);

	for (int i = size-1; i >= 0; i--) {
		cout << ptr[i];
	}
	cout << endl;
}

int charCount(char* ptr) {
	int count = 0;

	while (*ptr) {
		count++;
		ptr++;
	}
	return count;
}