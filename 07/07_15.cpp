/*
15. vector Modification
Modify the National Commerce Bank case study presented in Program 7-23 so pin1, 
pin2, and pin3 are vectors instead  of  arrays.  You  must  also  modify  the testPIN
function to accept a vector instead of an array.
*/

#include <iostream>
#include <vector>
using namespace std;

bool testPIN(vector<int>, vector<int>, int);

int main() {
	vector<int> pin1 {2,4,1,8,7,9,0};
	vector<int> pin2 {2,4,6,8,7,9,0};
	vector<int> pin3 {1,2,3,4,5,6,7};

	int digits = pin1.size();

	if (testPIN(pin1, pin2, digits))
		cout << "ERROR: pin1 and pin2 report to be the same.\n";
	else
		cout << "SUCCESS: pin1 and pin2 are different.\n";

	if (testPIN(pin1, pin3, digits))
		cout << "ERROR: pin1 and pin3 report to be the same.\n";
	else
		cout << "SUCCESS: pin1 and pin3 are different.\n";

	if (testPIN(pin1, pin1, digits))
		cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
	else
		cout << "ERROR: pin1 and pin1 report to be different.\n";
	return 0;
}

bool testPIN(vector<int> custPIN,vector<int> databasePIN,int size) {
	bool isValid;
	int error = 0, end = size;
	while (error < 1 || size > 0) {
		for (int index = 0; index < size; index++) {
			if (custPIN[index] != databasePIN[index]) {
				error++;
			}
			size--;
	}
		isValid = error > 0 ? false : true;
		return isValid;
	}
}
