/*
3. Drop Lowest Score 
Modify Problem 2 above so the lowest test score is dropped. This score should not be 
included in the calculation of the average. 
*/

#include <iostream>
#include <iomanip>
#include <memory>
using namespace std;

int *getScores(int);
void sortAsc(int [], int);
int scoreAverage(int [], int);
int dropLowest(int [], int);

void main() {
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
	char drop;
	cout << "\nScore average: " << scoreAverage(scores, numberOfScores) << endl;
	cout << "\nDrop lowest score?";
	cin >> drop;
	drop = toupper(drop);
	
	if (drop == 'Y') {
		cout << "Lowest score dropped." << endl;
		cout << "\nScore average: " << dropLowest(scores, numberOfScores);
		cout << endl;
	}
	
	cout << endl;
	delete [] scores;

	return; 
}

int dropLowest(int arr[], int size) {
	double total = 0;
	for (int i = 0; i < size; i++) {
		total+=arr[i];
	}
	return total/(size-1);
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