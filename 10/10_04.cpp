/*
4. Average Number of Letters 
Modify the program you wrote for Problem 3 (Word Counter), so it also displays the 
average number of letters in each word. 
*/

#include <iostream>
using namespace std;

int wordCount(char*);
int letterCount(char*);

void main() {
	const int MAX = 256;
	char input[MAX];

	cout << "Enter a string:" << endl;
	cin.getline(input, MAX);

	int wordNum = wordCount(input), letterNum = letterCount(input);

	cout << endl;
	cout << "Word count: " << wordNum << endl;
	cout << "Letters per word: " << letterNum/wordNum << endl;
	cout << endl;

	return; 
}

int letterCount(char* ptr) {
	int letters = 1;

	while (*ptr) {
		if (isalpha(*ptr)) {	// The directions said "letters" not "characters"
			letters++;
		}
		ptr++;
	}
	return letters;
}

int wordCount(char* ptr) {
	int words = 1;

	while (*ptr) {
		if (isspace(*ptr)) {
			words++;
		}
		ptr++;
	}
	return words;
}