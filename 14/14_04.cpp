/*
4. NumDays Class 
Design a class called  NumDays. The class’s purpose is to store a value that represents a 
number of work hours and convert it to a number of days. For example, 8 hours would 
be converted to 1 day, 12 hours would be converted to 1.5 days, and 18 hours would 
be converted to 2.25 days. The class should have a constructor that accepts a number 
of  hours,  as  well  as  member  functions  for  storing  and  retrieving  the  hours  and  days.  
The class should also have the following overloaded operators: 
+	Addition  operator. When  two  NumDays objects  are  added  together,  the  over-
loaded + operator should return the sum of the two objects’ hours members. 
−	Subtraction  operator. When  one NumDays object  is  subtracted  from  another,  
the overloaded − operator should return the difference of the two objects’ hours 
members. 
++	Prefix  and  postfix  increment  operators. These  operators  should  increment  the  
number  of  hours  stored  in  the  object.  When  incremented,  the  number  of  days  
should be automatically recalculated. 
−−	Prefix  and  postfix  decrement  operators. These  operators  should  decrement  the  
number  of  hours  stored  in  the  object.  When  decremented,  the  number  of  days  
should be automatically recalculated. 
*/

#include <iostream>
#include <string>

using namespace std;

class NumDays {
private:
	double hours, days;

public:
	NumDays(double h) {
		setHours(h);
	}

	void setHours(double h) { hours = h; days = hours/8.0; }
	void setDays(double d) { days = d; hours = days*8.0; }
	double getHours() const { return hours; }
	double getDays() const { return days; }

	NumDays operator+(NumDays &r) {
		return hours + r.hours;
	}
	NumDays operator-(NumDays &r) {
		return hours - r.hours;
	}
	NumDays operator++() {
		setHours(++hours);
		return hours;
	}
	NumDays operator++(int) {
		NumDays temp(hours);
		hours++;
		days = hours/8.0;
		return temp;
	}
	NumDays operator--() {
		setHours(--hours);
		return hours;
	}
	NumDays operator--(int) {
		NumDays temp(hours);
		hours--;
		days = hours/8.0;
		return temp;
	}

	void show() {
		cout << "\nHours: \t" << days << "\nDays: \t" << hours << endl;
	}

};


void main() {
	NumDays a(2);
	NumDays b(4);
	NumDays total = a + b;

	total.show();
	++total;
	total.show();
	total++;
	total.show();
	--total;
	total.show();
	total--;
	total.show();

	return; 
}

