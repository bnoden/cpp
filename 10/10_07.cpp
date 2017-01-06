/*
7. Name Arranger 
Write  a  program  that  asks  for  the  user’s  first,  middle,  and  last  names.  The  names  
should be stored in three different character arrays. The program should then store, 
in a fourth array, the name arranged in the following manner: the last name followed 
by  a  comma  and  a  space,  followed  by  the  first  name  and  a  space,  followed  by  the  
middle name. For example, if the user entered “Carol Lynn Smith”, it should store 
“Smith, Carol Lynn” in the fourth array. Display the contents of the fourth array 
on the screen. 
*/

#include <iostream>
using namespace std;

void setName(char*, char*, char*, char*);
int charCount(char*);

void main() {
	const int NAME_MAX = 30;
	const int MAX = 256;
	char firstName[NAME_MAX], middleName[NAME_MAX], lastName[NAME_MAX];
	char fullName[MAX];

	cout << "First name: ";
	cin.getline(firstName, NAME_MAX);
	cout << "Middle name: ";
	cin.getline(middleName, NAME_MAX);
	cout << "Last name: ";
	cin.getline(lastName, NAME_MAX);

	setName(firstName, middleName, lastName, fullName);
	cout << endl;

	int nameSize = charCount(fullName);

	cout << "Name has been stored as: " << endl;
	for (int i = 0; i < nameSize; i++) {
		cout << fullName[i];
	}

	cout << "\n" << endl;
	return; 
}

void setName(char* first,char* middle,char* last, char* full) {
	int sizeFull = 0, sizeFirst = charCount(first),
		sizeMiddle = charCount(middle), sizeLast = charCount(last);

	for (int i = 0; i < sizeLast; i++) { full[i] = last[i]; sizeFull++; } 
	full[sizeFull] = ','; sizeFull++;
	full[sizeFull] = ' '; sizeFull++;

	for (int i = 0; i < sizeFirst; i++) { full[sizeFull] = first[i]; sizeFull++; } 
	full[sizeFull] = ' '; sizeFull++;

	for (int i = 0; i < sizeMiddle; i++) { full[sizeFull] = middle[i]; sizeFull++; } 
	full[sizeFull] = '\0';
}

int charCount(char* name) {
	int count = 0;

	while (*name) {
		count++;
		name++;
	}
	return count;
}