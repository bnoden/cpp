/*
26. Using Files—Savings Account Balance Modification 
Modify the Savings Account Balance program described in Programming Challenge 16 
so that it writes the final report to a file. 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
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

	string fBalance = "D:\\000\\0cpp\\05\\balance.txt";
	ofstream balanceFile(fBalance);

	balanceFile << setprecision(2) << fixed;
	balanceFile << "\nBalance: $" << currentBalance << endl;
	balanceFile << "Total amount deposited: $" << depositTotal << endl;
	balanceFile << "Total amount withdrawn: $" << withdrawalTotal << endl;
	balanceFile << "Total interest earned: $" << interestEarned << endl;
	balanceFile << endl;

	cout << endl;
	cout << fBalance << " has been updated.\n";

	balanceFile.close();

	return;
}
