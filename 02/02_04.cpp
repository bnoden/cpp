/*
4.  Restaurant  Bill  
Write a program that computes the tax and tip on a restaurant bill for a patron with 
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should 
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip 
amount, and total bill on the screen. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double mealCost = 88.67;
	double tax = 0.0675*mealCost;
	double tip = 0.2*(mealCost+tax);

	cout << setprecision(2) << fixed;
	cout << "Meal: $" << mealCost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Tip: $" << tip << endl;
	cout << "Total: $" << mealCost+tax+tip << endl;
	cout << endl;

	return 0; 
}