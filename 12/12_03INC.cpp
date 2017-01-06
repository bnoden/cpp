/*
3. Punch Line 
Write a program that reads and prints a joke and its punch line from two different files. 
The first file contains a joke, but not its punch line. The second file has the punch line as 
its last line, preceded by “garbage.” The main function of your program should open the 
two files and then call two functions, passing each one the file it needs. The first function 
should read and display each line in the file it is passed (the joke file). The second function 
should display only the last line of the file it is passed (the punch line file). It should find 
this line by seeking to the end of the file and then backing up to the beginning of the last 
line. Data to test your program can be found in the joke.txt and punchline.txt files. 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void openFile(fstream &, fstream &, string, string);
void readJoke(fstream &, string &);
void readPunchline(fstream &, string &);

void main() {
	string dir = "D:\\000\\0cpp\\12\\";
	string jokeFilename = dir+"joke.txt", punchlineFilename = dir+"punchline.txt";

	fstream jokeFile, punchlineFile;

	openFile(jokeFile, punchlineFile, jokeFilename, punchlineFilename);

	return; 
}

void readPunchline(fstream &file, string &filename) {
	string line;



	

}

void readJoke(fstream &file, string &filename) {
	string line;

	while (!file.eof()) {
		getline(file, filename);
		cout << filename << endl;
	}
}

void openFile(fstream &file1, fstream &file2, string joke, string punchline) {
	file1.open(joke, ios::in);
	file2.open(punchline, ios::ate);
	readJoke(file1, joke);
	readPunchline(file2, punchline);
}