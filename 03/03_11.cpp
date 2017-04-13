/*
11.    Automobile Costs
Write  a  program  that  asks  the  user  to  enter  the  monthly  costs  for  the  following  
expenses incurred from operating his or her automobile: loan payment, insurance, gas, 
oil, tires, and maintenance. The program should then display the total monthly cost of 
these expenses, and the total annual cost of these expenses. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

double loan, insurance, gas, oil, tires, maintenance;
double costPerMonth, costPerYear;

int main() {
	cout << "Enter your monthly costs." << endl;
	cout << "Loan payments: $";
	cin >> loan;
	cout << "Insurance: $";
	cin >> insurance;
	cout << "Gas: $";
	cin >> gas;
	cout << "Oil: $";
	cin >> oil;
	cout << "Tires: $";
	cin >> tires;
	cout << "Maintenance: $";
	cin >> maintenance;

	costPerMonth = loan+insurance+gas+oil+tires+maintenance;
	costPerYear = costPerMonth*12;

	cout << setprecision(2) << fixed;
	cout << "\nMonthly expenses: $" << setw(7) << right << costPerMonth << endl;
	cout << "Yearly expenses:  $" << setw(6) << right << costPerYear << endl;

	return 0;
}
