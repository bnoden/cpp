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

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < row; j++) { cout << "#"; }
		cout << "\n";
		row--;
	}

	return;
}