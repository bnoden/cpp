/*
  7.    
Month Class 
Design a class named  Month. The class should have the following private members: 
•      name
A string object  that  holds  the  name  of  a  month,  such  as  “January,”  
“February,” etc. 
•      monthNumber
An integer variable that holds the number of the month. For exam-
ple, January would be 1, February would be 2, etc. Valid values for this variable are 
1 through 12. 
In addition, provide the following member functions: 
•      A default constructor that sets  monthNumber to 1 and  name to “January.” 
•      A constructor that accepts the name of the month as an argument. It should set  
name to the value passed as the argument and set  monthNumber to the correct value. 
•      A constructor that accepts the number of the month as an argument. It should set 
monthNumber to the value passed as the argument and set  name to the correct month name. 
•      Appropriate set and get functions for the  name and  monthNumber member variables. 
•      Prefix  and  postfix  overloaded ++ operator  functions  that  increment monthNumber
and set name to the name of next month. If  monthNumber is set to 12 when these functions execute, they should set  
monthNumber to 1 and  name to “January.” 
•      Prefix  and  postfix  overloaded    −−  operator  functions  that  decrement monthNumber
and set  name to the name of previous month. If  monthNumber is set to 1 when these 
functions execute, they should set  monthNumber to 12 and  name to “December.” 
Also, you should overload  cout’s  << operator and  cin’s  >> operator to work with the 
Month class. Demonstrate the class in a program. 
*/

#include <iostream>
#include <string>

using namespace std;


class Month {
	static const int MONTHS_IN_YEAR = 12;

private:
	string monthName;
	int monthNumber;
	string months[MONTHS_IN_YEAR] = {"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"};

public:
	Month();
	Month(string);
	Month(int);

	void setMonthName(string);
	void setMonthNumber(int);
	
	string getMonthName() { return monthName; }
	int getMonthNumber() { return monthNumber; }

	Month operator++() {
		setMonthNumber(++monthNumber);
		return monthNumber;
	}
	Month operator++(int) {
		Month temp(monthNumber);
		monthNumber++;
		monthName = months[monthNumber-1];
		return temp;
	}
	Month operator--() {
		setMonthNumber(--monthNumber);
		return monthNumber;
	}
	Month operator--(int) {
		Month temp(monthNumber);
		monthNumber--;
		monthName = months[monthNumber-1];
		return temp;
	}

	friend ostream &operator<<(ostream &strm, const Month obj) {
		strm << "monthName=" << obj.monthName << " monthNumber=" << obj.monthNumber;
		return strm;
	}

};

void Month::setMonthName(string n) {
	for (int i = 0; i < MONTHS_IN_YEAR; i++) {
		if (n == months[i]) {
			monthName = n;
			monthNumber = i+1;
		}
	}
}

void Month::setMonthNumber(int m) {
	monthNumber = m;
	monthName = months[m-1];
}

Month::Month() { setMonthName("January"); }
Month::Month(string n) { setMonthName(n); }
Month::Month(int m) { setMonthNumber(m); }

int main() {

	// Create a Month object
	Month m("March");
	cout << m.getMonthName() << endl;
	cout << m.getMonthNumber() << endl << endl; 
	m.setMonthName("July");
	cout << m.getMonthName() << endl;
	cout << m.getMonthNumber() << endl << endl; 
	m.setMonthNumber(2); 
	cout << m.getMonthName() << endl;
	cout << m.getMonthNumber() << endl << endl;
	// Test the prefix ++ operator.
	cout << ++m << endl; 
	// Test the postfix ++ operator.
	cout << m++ << endl; 
	cout << m << endl << endl;
	// Test the prefix --operator.
	cout << --m << endl; 
	// Test the postfix ++ operator.
	cout << m-- << endl; 
	cout << m << endl << endl;

	return 0;
}
