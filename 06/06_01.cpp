/*
1. Markup 
Write a program that asks the user to enter an item’s wholesale cost and its markup 
percentage. It should then display the item’s retail price. For example: 
• If  an  item’s  wholesale  cost  is  5.00  and  its  markup  percentage  is  100%,  then  the  
item’s retail price is 10.00. 
• If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s 
retail price is 7.50. 
The  program  should  have  a  function  named calculateRetail that  receives  the  
wholesale cost and the markup percentage as arguments and returns the retail price 
of the item. 
Input  Validation:  Do  not  accept  negative  values  for  either  the  wholesale  cost  of  the  
item or the markup percentage.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);

int main() {
	double costWholesale = -0.01, markup = -0.01;

	while (costWholesale < 0.0) {
		cout << "Enter wholesale: $";
		cin >> costWholesale;
	}
	
	while (markup < 0.0) {
		cout << "Enter markup %: ";
		cin >> markup;
	}

	cout << setprecision(2) << fixed;
	cout << "\nThe retail cost for this item is $" << calculateRetail(costWholesale, markup) << endl;
	cout << endl;

	return 0;
}

double calculateRetail(double cost, double markup) {
	return cost+(cost*(markup/100.0));
}
