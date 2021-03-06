/*
14. Monthly Sales Tax
A retail company must file a monthly sales tax report listing the sales for the month and 
the amount of sales tax collected. Write a program that asks for the month, the year, 
and the total amount collected at the cash register (that is, sales plus sales tax). Assume 
the state sales tax is 4 percent and the county sales tax is 2 percent. 
If the total amount collected is known and the total sales tax is 6 percent, the amount 
of product sales may be calculated as: 
S = T/1.06
S is the product sales and T is the total income (product sales plus sales tax). 
The program should display a report similar to 
Month: October 
-------------------- 
Total Collected:     $ 26572.89 
Sales:               $ 25068.76 
County Sales Tax:    $   501.38 
State Sales Tax:     $  1002.75 
Total Sales Tax:     $  1504.13 
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double STATE_TAX = 0.04;
const double COUNTY_TAX = 0.02;

double sales, totalIncome, revenue;
double totalTax = STATE_TAX + COUNTY_TAX;
string month;
int year;

int w = 20, w2 = 8;

int main() {
	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter total amount collected: ";
	cin >> totalIncome;

	revenue = totalIncome / (1.0+totalTax);

	cout << setprecision(2) << fixed;
	cout << month << ' ' << year << endl;
	cout << "--------------------" << endl;
	cout << setw(w) << left << "Total Collected:" << right << "$ " << setw(w2) << totalIncome << endl;
	cout << setw(w) << left << "Sales: " << right << "$ " << setw(w2) << revenue << endl;
	cout << setw(w) << left << "County Sales Tax:" << right << "$ " << setw(w2) << revenue*COUNTY_TAX << endl;
	cout << setw(w) << left << "State Sales Tax:" << right << "$ " << setw(w2) << revenue*STATE_TAX << endl;
	cout << setw(w) << left << "Total Sales Tax:" << right << "$ " << setw(w2) << revenue*totalTax << endl;

	return 0;
}
