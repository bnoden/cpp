/*
24. Using Files—Numeric Processing 
If  you  have  downloaded  this  book’s  source  code  from  the  companion  Web  site,  you  
will find a file named Random.txt in the Chapter 05 folder.  (The  companion  Web  
site is at www.pearsonhighered.com/gaddis.)  This  file  contains  a  long  list  of  random  
numbers. Copy the file to your hard drive and then write a program that opens the file, 
reads all the numbers from the file, and calculates the following: 
A) The number of numbers in the file 
B) The sum of all the numbers in the file (a running total) 
C) The average of all the numbers in the file
The program should display the number of numbers found in the file, the sum of the 
numbers, and the average of the numbers. 
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void main() {
	ifstream inFile;
	inFile.open("D:\\000\\0cpp\\05\\Random.txt");	// Couldn't find random.txt, renamed ListOfNumbers.txt instead
	int number = 0, sum = 0, count = 0;

	while (inFile >> number) {
		count++;
		sum+=number;
	}

	cout << "The file contains " << count << " numbers." << endl;
	cout << "The sum of these numbers is " << sum << "." << endl;
	if (count > 0) {
		cout << "The average is " << sum/count << "." << endl;
	}

	inFile.close();

	return;
}
