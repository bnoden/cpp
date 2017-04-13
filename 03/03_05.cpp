/*
5.    Male and Female Percentages
Write a program that asks the user for the number of males and the number of females 
registered in a class. The program should display the percentage of males and females 
in the class. 
Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the 
class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percent-
age of females can be calculated as 12 ÷ 20 = 0.6, or 60%.
*/

#include <iostream>
#include <iomanip>
using namespace std;

float male, female, total;

int main() {
	cout << "Enter number of male students: ";
	cin >> male;
	cout << "Enter number of female students: ";
	cin >> female;
	total = male + female;

	cout << setprecision(2);
	cout << "The class is " << (male/total)*100 << "% male and ";
	cout << (female/total)*100 << "% female." << endl;

	return 0;
}
