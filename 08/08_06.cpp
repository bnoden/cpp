/*
6. String Selection Sort 
Modify  the selectionSort function  presented  in  this  chapter  so  it  sorts  an  array  
of  strings  instead  of  an  array  of ints.  Test  the  function  with  a  driver  program.  Use  
Program 8-8 as a skeleton to complete. 
*/

#include <iostream> 
#include <string>
using namespace std; 

void selectSort(string[], int);

int main() 
{ 
	const int NUM_NAMES = 20; 
	string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", 
		"Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
		"Taylor, Terri", "Johnson, Jill", 
		"Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
		"James, Jean", "Weaver, Jim", "Pore, Bob", 
		"Rutherford, Greg", "Javens, Renee", 
		"Harrison, Rose", "Setzer, Cathy", 
		"Pike, Gordon", "Holland, Beth" }; 
	// Insert your code to complete this program 
	selectSort(names, NUM_NAMES);

	for (string name : names) {
		cout << name << endl;
	}
	char confirm;
	string format = ".....................................";
	int tease = 7;
	cout << "\nAre the names properly sorted? (Y/N) " << endl;
	cin >> confirm;
	if (confirm == 'Y' || confirm == tolower('Y')) { cout << "\nGoodbye.\n" << endl; }
	else if (confirm == 'N' || confirm == tolower('N')) {
		cout << "Format drive C:\\? (Y/N) " << endl;
		cin >> confirm;
		cout << "\nFomatting drive C:\\" << format;
		while (tease > 0) {
			cin.get();
			format+=format;
			cout << format;
			tease--;
		}
		cout << "\nI am kidding. Ha ha ha. Perhaps you should not lie next time.\nGoodbye.\n" << endl;
	}
	else if (confirm) {
		cout << "\nI will take that as a \"yes\".\nGoodbye." << endl;
	}

	return 0; 
}

void selectSort(string arr[],int size) {
	int start, minIndex;
	string minVal; 
	for (start = 0; start < (size-1); start++) { 
		minIndex = start; minVal = arr[start]; 
		for(int i = start + 1; i < size; i++) { 
			if (arr[i] < minVal) { 
				minVal = arr[i]; 
				minIndex = i; 
			} 
		} 
		arr[minIndex] = arr[start]; arr[start] = minVal; 
	} 
}