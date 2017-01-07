/*
1. Date 
Design a class called Date. The class should store a date in three integers: month, day, 
and year. There should be member functions to print the date in the following forms: 
12/25/2014 
December 25, 2014 
25 December 2014 
Demonstrate the class by writing a complete program implementing it. 

Input Validation: Do not accept values for the day greater than 31 or less than 1. Do 
not accept values for the month greater than 12 or less than 1
*/

#include <iostream>
#include <string>

using namespace std;

class Date {
private:
	int month, day, year;

public:
	string months[12] = {"January","February","March","April","May","June","July",
						"August","September","October","November","December"};

	void setMonth(int m) {month = m;}
	void setDay(int d) {day = d;}
	void setYear(int y) {year = y;}
	
	int getMonth() const {return month;}
	int getDay() const {return day;}
	int getYear() const {return year;}
	
	int monthToInt(string m) {
		int intMonth = 0;
		for (int i = 0; i < 12; i++) {
			if (m == months[i]) { intMonth = i; }
		}
		return intMonth;
	}

	string monthToString(int m) { return months[m-1]; }

	void showDate1() { cout << month << '\\' << day << '\\' << year; }
	void showDate2() { cout << monthToString(month) << ' ' << day << ", " << year; }
	void showDate3() { cout << day << ' ' << monthToString(month) << ' ' << year; }
};

void main() {
	int monthNum = 0, dayNum = 0, yearNum = 0;
	Date date;

	while (dayNum < 1 || dayNum > 31) {
		cout << "Enter day (1-31): ";
		cin >> dayNum;
	}
	date.setDay(dayNum);

	while (monthNum < 1 || monthNum > 12) {
		cout << "Enter month (1-12): ";
		cin >> monthNum;
	}
	date.setMonth(monthNum);

	while (yearNum < 1000 || yearNum > 9999) {
		cout << "Enter year: ";
		cin >> yearNum;
	}
	date.setYear(yearNum);

	cout << endl;
	date.showDate1(); cout << endl;
	date.showDate2(); cout << endl;
	date.showDate3(); cout << endl;
	cout << endl;

	return; 
}
