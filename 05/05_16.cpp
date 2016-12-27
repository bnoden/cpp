/*
16. Savings Account Balance 
Write a program that calculates the balance of a savings account at the end of a period 
of time. It should ask the user for the annual interest rate, the starting balance, and the 
number of months that have passed since the account was established. A loop should 
then iterate once for every month, performing the following: 
A) Ask the user for the amount deposited into the account during the month. (Do not 
accept negative numbers.) This amount should be added to the balance. 
B) Ask the user for the amount withdrawn from the account during the month. (Do 
not accept negative numbers.) This amount should be subtracted from the balance. 
C) Calculate the monthly interest. The monthly interest rate is the annual interest rate 
divided by twelve. Multiply the monthly interest rate by the balance, and add the 
result to the balance. 
After  the  last  iteration,  the  program  should  display  the  ending  balance,  the  total  
amount of deposits, the total amount of withdrawals, and the total interest earned. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

void main() {
	double interestYearly = 0.0, initialBalance = 0.0, currentBalance = 0.0;
	double interestMonthly, amountDeposited, amountWithdrawn = 0.0;
	double interestEarned = 0.0, depositTotal = 0.0, withdrawalTotal = 0.0;
	int months = 1;

	cout << "Annual interest rate: ";
	cin >> interestYearly;
	interestMonthly = interestYearly/12.0;
	cout << "Starting balance: ";
	cin >> initialBalance;
	currentBalance = initialBalance;
	cout << "Months since account was established: ";
	cin >> months;

	for (int i = 1; i <= months; i++) {
		amountDeposited = -0.01;
		amountWithdrawn = -0.01;
		while (amountDeposited < 0.0) {
			cout << "\nAmount deposited for month " << i << ": $";
			cin >> amountDeposited;
			depositTotal+=amountDeposited;
		}
		currentBalance+=amountDeposited;
		while (amountWithdrawn < 0.0) {
			cout << "Amount withdrawn for month " << i << ": $";
			cin >> amountWithdrawn;
			withdrawalTotal+=amountWithdrawn;
		}
		currentBalance-=amountWithdrawn;
		interestEarned+=(currentBalance*interestMonthly);
		currentBalance+=interestEarned;
	}

	cout << setprecision(2) << fixed;
	cout << "\nEnding balance: $" << currentBalance << endl;
	cout << "Total amount deposited: $" << depositTotal << endl;
	cout << "Total amount withdrawn: $" << withdrawalTotal << endl;
	cout << "Total interest earned: $" << interestEarned << endl;
	cout << endl;
	
	return;
}
