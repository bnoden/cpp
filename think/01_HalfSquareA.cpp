/*
	Write a program that uses only two output statements, cout << "#" and cout << "\n", 
	to produce a pattern of hash symbols shaped like half of a perfect 5 x 5 square (or a 
	right triangle):
	#####
	####
	###
	##
	#
*/

#include <iostream>
using namespace std;

void main() {
	int row = 5;

	do {
		for (int i = 0; i < row; i++) { cout << "#"; }
		cout << "\n";
	} while (row--);

	return;
}