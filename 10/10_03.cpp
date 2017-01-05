/*
3. Word Counter 
Write a function that accepts a pointer to a C-string as an argument and returns the 
number of words contained in the string. For instance, if the string argument is “Four 
score and seven years ago” the function should return the number 6. Demonstrate the 
function in a program that asks the user to input a string and then passes it to the func-
tion. The number of words in the string should be displayed on the screen.  

Optional Exercise: Write an overloaded version of this function that accepts a string class object 
as its argument. 
*/

#include <iostream>
using namespace std;

int wordCount(char*);

void main() {
	const int MAX = 256;
	char input[MAX];

	cout << "Enter a string:" << endl;
	cin.getline(input, MAX);

	cout << endl;
	cout << "Word count: " << wordCount(input);
	cout << endl;

	return; 
}

int wordCount(char* ptr) {
	int count = 1;

	while (*ptr) {
		if (isspace(*ptr)) {
			count++;
		}
		ptr++;
	}
	return count;
}