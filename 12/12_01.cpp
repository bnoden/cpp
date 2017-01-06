/*
1. File Head Program 
Write a program that asks the user for the name of a file. The program should display 
the first 10 lines of the file on the screen (the “head” of the file). If the file has fewer
than 10 lines, the entire file should be displayed, with a message indicating the entire 
file has been displayed. 

NOTE: Using an editor, you should create a simple text file that can be used to test 
this program. 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void main() {
	string file, fileName;

	cout << "Enter file name: ";
	cin >> file;	// speech.txt

	fileName = "D:\\000\\0cpp\\12\\" + file;

	fstream dataFile(fileName, ios::in);

	if (dataFile) {
		cout << "File found.\n" << endl;
		int line = 10, i = 0;

		while(line && !dataFile.eof()) {
			i++;
			getline(dataFile, fileName, '\n');
			cout << setw(3) << right << i << ' ';
			cout << fileName << endl;
			line--;
		}

		if (line) {
			cout << "File is less than 10 lines. File was displayed in full." << endl;
		}
		dataFile.close();
	}
	else if (!dataFile) {
		cout << "Operation failed.";
	}

	return; 
}