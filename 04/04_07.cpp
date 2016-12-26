/*
7. Time Calculator 
Write a program that asks the user to enter a number of seconds. 
• There are 60 seconds in a minute. If the number of seconds entered by the user is 
greater than or equal to 60, the program should display the number of minutes in 
that many seconds. 
• There are 3,600 seconds in an hour. If the number of seconds entered by the user is 
greater than or equal to 3,600, the program should display the number of hours in 
that many seconds. 
• There are 86,400 seconds in a day. If the number of seconds entered by the user is 
greater than or equal to 86,400, the program should display the number of days in 
that many seconds. 
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double minute = 60, hour = 3600, day = 86400;

void main() {
	int seconds;
	double intVal = 1;
	string strVal = " seconds";

	cout << "Enter number of seconds: ";
	cin >> seconds;
	
	if (seconds >= day) { intVal = day; strVal = " days"; }
	else if (seconds >= hour) { intVal = hour; strVal = " hours"; }
	else if (seconds >= minute) { intVal = minute; strVal = " minutes"; }

	cout << setprecision(2) << fixed;
	cout << "There are " << seconds/intVal << strVal << " in " << seconds << " seconds." << endl;

	return;
}
