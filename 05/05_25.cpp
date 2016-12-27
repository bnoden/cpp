/*
25. Using Files—Student Line Up 
Modify the Student Line Up program described in Programming Challenge 14 so that 
it gets the names from a file. Names should be read in until there is no more data to 
read. If you have downloaded this book’s source code from the companion Web site, 
you will find a file named LineUp.txt in the  
Chapter  
05 
folder. You can use this file to 
test the program. (The companion Web site is at  
www.pearsonhighered.com/gaddis.) 
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void main() {
	string name;
	ifstream nameFile;

	nameFile.open("D:\\000\\0cpp\\05\\LineUp.txt");

	while (nameFile >> name) {
		cout << name << endl;
	}

	nameFile.close();

	return;
}
