/*
2. Stadium Seating
There are three seating categories at a stadium. For a softball game, Class A seats cost 
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how 
many tickets for each class of seats were sold, then displays the amount of income gen-
erated from ticket sales. Format your dollar amount in fixed-point notation, with two 
decimal places of precision, and be sure the decimal point is always displayed. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int costA = 15, costB = 12, costC = 9;

void main() {
	int ticketsA, ticketsB, ticketsC;
	double incomeA, incomeB, incomeC, incomeTotal;

	cout << "Class A tickets sold: ";
	cin >> ticketsA;
	incomeA = ticketsA * costA;
	cout << "Class B tickets sold: ";
	cin >> ticketsB;
	incomeB = ticketsB * costB;
	cout << "Class C tickets sold: ";
	cin >> ticketsC;
	incomeC = ticketsC * costC;
	incomeTotal = incomeA + incomeB + incomeC;
	cout << setprecision(2) << fixed << "Total revenue: $" << incomeTotal << endl;
	return;
}