/*
2. Rainfall Statistics 
Write a program that lets the user enter the total rainfall for each of 12 months into 
an  array  of doubles.  The  program  should  calculate  and  display  the  total  rainfall  for  
the  year,  the  average  monthly  rainfall,  and  the  months  with  the  highest  and  lowest  
amounts. 

Input Validation: Do not accept negative numbers for monthly rainfall figures.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	const int MONTHS = 12;

	string monthArr[MONTHS] = {"January","February","March","April","May","June","July",
							"August","September","October","November","December"};

	double rainfall[MONTHS];
	double totalRainfall = 0.0;
	double min = 255.0, max = 0.0;

	string low = monthArr[0], high = monthArr[0];
	
	cout << "Enter total rainfall for each month.\n" << endl;
	for (int i = 0; i < MONTHS; i++) {
		while (!(rainfall[i] > 0)) {
			cout << monthArr[i] << ": ";
			cin >> rainfall[i];
		}
		totalRainfall += rainfall[i];
		if (min > rainfall[i]) {
			min = rainfall[i];
			low = monthArr[i];
		}
		if (max < rainfall[i]) {
			max = rainfall[i];
			high = monthArr[i];
		}
	}

	cout << "\nTotal rainfall: " << totalRainfall << endl;
	cout << setprecision(2) << fixed << "Average monthly rainfall: " << totalRainfall/MONTHS << endl;
	cout << "The rainiest month was: " << high << endl;
	cout << "The least rainy month was: " << low << endl;

	cout << "\nGoodbye." << endl;


	return 0; 
}

