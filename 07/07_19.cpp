/*
19. 2D Array Operations
Write a program that creates a two-dimensional array initialized with test data. Use any 
data type you wish. The program should have the following functions: 
• getTotal. This function should accept a two-dimensional array as its argument and 
return the total of all the values in the array. 
• getAverage. This function should accept a two-dimensional array as its argument 
and return the average of all the values in the array. 
• getRowTotal. This function should accept a two-dimensional array as its first argu-
ment  and  an  integer  as  its  second  argument.  The  second  argument  should  be  the  
subscript of a row in the array. The function should return the total of the values in 
the specified row. 
• getColumnTotal .  This  function  should  accept  a  two-dimensional  array  as  its  first  
argument and an integer as its second argument. The second argument should be the 
subscript of a column in the array. The function should return the total of the values 
in the specified column. 
• getHighestInRow. This function should accept a two-dimensional array as its first 
argument and an integer as its second argument. The second argument should be the 
subscript of a row in the array. The function should return the highest value in the 
specified row of the array. 
• getLowestInRow.  This  function  should  accept  a  two-dimensional  array  as  its  first  
argument and an integer as its second argument. The second argument should be the 
subscript of a row in the array. The function should return the lowest value in the 
specified row of the array. 
Demonstrate each of the functions in this program. 
*/

#include <iostream>
using namespace std;

const int SIZE = 4;
int getTotal(int[SIZE][SIZE]);
int getAverage(int[SIZE][SIZE]);
int getRowTotal(int[SIZE][SIZE], int);
int getColumnTotal(int[SIZE][SIZE], int);
int getHighestInRow(int[SIZE][SIZE], int);
int getLowestInRow(int[SIZE][SIZE], int);

int main() {
	int numbers[SIZE][SIZE];
	int arrNum = 0, rowNum = -1, colNum = -1;

	for (int i = 0; i < SIZE; i++) {
		arrNum+=4;
		for (int j = 0; j < SIZE; j++) {
			arrNum+=4;
			numbers[i][j] = arrNum;
		}
	}

	cout << "Total: " << getTotal(numbers) << endl;
	cout << "Average: " << getAverage(numbers) << endl;

	while (rowNum < 0 || rowNum > SIZE) {
		cout << "Enter a number between 0 and " << SIZE-1 << " for information about that row: ";
		cin >> rowNum;
	}

	cout << "The total for the elements in ROW ";
	cout << rowNum << " is " << getRowTotal(numbers, rowNum) << endl;
	cout << "The highest number in this row is " << getHighestInRow(numbers, rowNum) << endl;
	cout << "The lowest number in this row is " << getLowestInRow(numbers, rowNum) << endl;

	while (colNum < 0 || colNum > SIZE) {
		cout << "Enter a number between 0 and " << SIZE-1 << " to get the sum of ";
		cout << "the elements in that COLUMN: ";
		cin >> colNum;
	}

	cout << "The total for the elements in COLUMN ";
	cout << colNum << " is " << getColumnTotal(numbers, colNum) << endl;

	return 0;
}

int getLowestInRow(int arr[SIZE][SIZE],int num) {
	int min = arr[0][0];

	for (int i = 0; i < SIZE; i++) {
		if (min > arr[num][i]) { min = arr[num][i]; }
	}
	return min;
}

int getHighestInRow(int arr[SIZE][SIZE],int num) {
	int max = arr[0][0];

	for (int i = 0; i < SIZE; i++) {
		if (max < arr[num][i]) { max = arr[num][i]; }
	}
	return max;
}

int getColumnTotal(int arr[SIZE][SIZE],int num) {
	int columnTotal = 0;
	for (int i = 0; i < SIZE; i++) {
		columnTotal+=arr[i][num];
	}
	return columnTotal;
}

int getRowTotal(int arr[SIZE][SIZE],int num) {
	int rowTotal = 0;
	for (int i = 0; i < SIZE; i++) {
		rowTotal+=arr[num][i];
	}
	return rowTotal;
}

int getAverage(int arr[SIZE][SIZE]) { return getTotal(arr)/(SIZE*SIZE); }

int getTotal(int arr[SIZE][SIZE]) {
	int total = 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			total+=arr[i][j];
		}
	}
	return total;
}