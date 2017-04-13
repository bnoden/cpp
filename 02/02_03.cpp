/*
3.  Sales  Tax  
Write a program that will compute the total sales tax on a $95 purchase. Assume the 
state sales tax is 4 percent and the county sales tax is 2 percent. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double STATE_TAX = 0.04;
const double COUNTY_TAX = 0.02;

double price = 95.0;
double taxTotal = price * (STATE_TAX + COUNTY_TAX);
double priceTotal = price + taxTotal;

int main() {
	cout << setprecision(2) << fixed << "Price: $" << price << endl;
	cout << setprecision(2) << fixed << "Tax: $" << taxTotal << endl;
	cout << setprecision(2) << fixed << "Total: $" << priceTotal << endl;

	return 0;
}
