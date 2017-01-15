/*
2. Lottery Winners 
A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 
5-digit “lucky” combinations. Write a program that initializes an array or a  
vector with these  numbers  and  then  lets  the  player  enter  this  week’s  winning  5-digit  number.  
The program should perform a linear search through the list of the player’s numbers 
and  report  whether  or  not  one  of  the  tickets  is  a  winner  this  week.  Here  are  the  
numbers: 
13579  26791  26792  33445  55555 
62483  77777  79422  85647  93121 
*/

#include <iostream>
#include <string>
using namespace std;

void main() { 
	int luckyNumbers[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	int winningNumber;
	bool won = false;

	cout << "Enter this week's winning 5-digit number: ";
	cin >> winningNumber;

	for (int number : luckyNumbers) {
		if (winningNumber == number) { won = true; }
	}

	if (won) { cout << "\nYou won!\n" << endl; }
	else if (!won) { cout << "\nYou did not win...\n" << endl; }

	return; 
}