/*
2. Test Scores #1 
Write  a  program  that  dynamically  allocates  an  array  large  enough  to  hold  a  user-
defined  number  of  test  scores.  Once  all  the  scores  are  entered,  the  array  should  be  
passed  to  a  function  that  sorts  them  in  ascending  order.  Another  function  should  be
called that calculates the average score. The program should display the sorted list of 
scores and averages with appropriate headings. Use pointer notation rather than array 
notation whenever possible. 

Input Validation: Do not accept negative numbers for test scores.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int *getScores(int);

void main() {
	int numberOfScores = -1;
	int *scores;

	while (numberOfScores <= 0) {
		cout << "Enter number of test scores: ";
		cin >> numberOfScores;
	}
	scores = getScores(numberOfScores);

	for (int i = 0; i < numberOfScores; i++) {
		cout << scores[i] << endl;
	}



	delete [] scores;

	return; 
}

int *getScores(int num) {
	int *arr = nullptr;

	if (num > 0) {
		arr = new int[num];

		for (int i = 0; i < num; i++) {
			cout << "Enter score: ";
			cin >> arr[i];
		}

	}

	return arr;
}