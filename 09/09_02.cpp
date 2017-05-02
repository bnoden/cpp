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
using namespace std;

int *getScores(int);
void sortAsc(int [], int);
int scoreAverage(int [], int);

int main() {
	int numberOfScores = -1;
	int *scores;

	while (numberOfScores <= 0) {
		cout << "Enter number of test scores: ";
		cin >> numberOfScores;
	}
	scores = getScores(numberOfScores);

	sortAsc(scores, numberOfScores);

	cout << "Scores sorted: " << endl;
	for (int i = 0; i < numberOfScores; i++) {
		cout << scores[i] << endl;
	}

	cout << "\nThe average of all scores is: " << scoreAverage(scores, numberOfScores) << endl;

	delete [] scores;

	return 0; 
}

int scoreAverage(int arr[], int size) {
	double total = 0;
	for (int i = 0; i < size; i++) {
		total+=arr[i];
	}
	return total/size;
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

void sortAsc(int arr[],int size) {
	int start, minIndex;
	int minElem;

	for (start = 0; start < size-1; start++) {
		minIndex = start;
		minElem = arr[start];
		for (int i = start+1; i < size; i++) {
			if ((arr[i]) < minElem) {
				minElem = arr[i];
				minIndex = i;
			}
		}
		arr[minIndex] = arr[start];
		arr[start] = minElem;
	}
}