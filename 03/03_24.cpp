/*
24. Word Game
Write a program that plays a word game with the user. The program should ask the 
user to enter the following: 
• His or her name 
• His or her age 
• The name of a city 
• The name of a college 
• A profession 
• A type of animal 
• A pet’s name 
After the user has entered these items, the program should display the following story, 
inserting the user’s input into the appropriate locations: 
There once was a person named  
NAME who lived in CITY. At the age of AGE, NAME went to college at COLLEGE.  
NAME graduated and went to work as a PROFESSION. Then, NAME adopted a(n) ANIMAL
named PETNAME. They both lived happily ever after!
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string name, city, college, profession, animal, pet;
int age;

int main() {
	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	cout << "City: ";
	cin >> city;
	cout << "College: ";
	cin >> college;
	cout << "Profession: ";
	cin >> profession;
	cout << "Favorite animal: ";
	cin >> animal;
	cout << "Name of a pet: ";
	cin >> pet;

	cout << "There once was a person named " << name << " who lived in " << city;
	cout << ". At the age of\n" << age << ", " << name << " went to college at " << college << ". ";
	cout << name << " graduated and went to work\nas a " << profession << ". Then, " << name;
	cout << " adopted a(an) " << animal << " named " << pet << ". They\nboth lived happily ever after!\n" << endl;
	cin.get();
	
	return 0;
}
