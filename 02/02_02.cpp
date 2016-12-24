/*
2.  Sales  Prediction  
The East Coast sales division of a company generates 58 percent of total sales. Based 
on that percentage, write a program that will predict how much the East Coast division 
will generate if the company has $8.6 million in sales this year. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

double percentOfSales = 0.58;
double sales = 8600000;

void main() {
	cout << setprecision(2) << fixed << "East Coast sales: $" << sales*percentOfSales << endl;
	return;
}
