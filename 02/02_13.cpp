/*
13.  Circuit Board Price 
An electronics company sells circuit boards at a 35 percent profit. Write a program that 
will calculate the selling price of a circuit board that costs $14.95. Display the result 
on the screen. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

double MarkUp(double);

int main() {
	cout << setprecision(2) << fixed << "Circuit Board\n" << "Wholesale $" << 14.95 << "\nRetail $" << MarkUp(14.95) << endl;

	return 0;
}

double MarkUp(double price) {
	const double markup = 1.35;
	return price * markup;
}