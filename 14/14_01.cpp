/*
1. Numbers Class 
Design a class  Numbers that can be used to translate whole dollar amounts in the range 
0 through 9999 into an English description of the number. For example, the number 
713  would  be  translated  into  the  string seven  hundred  thirteen,  and  8203  would  be  
translated into eight thousand two hundred three. The class should have a single inte-
ger member variable: 

int number; 

and a static array of string objects that specify how to translate key dollar amounts 
into the desired format. For example, you might use static strings such as 

string lessThan20[20] = {"zero", "one", ..., "eighteen", "nineteen"}; 
string hundred = "hundred"; 
string thousand = "thousand"; 

The class should have a constructor that accepts a nonnegative integer and uses it to 
initialize  the Numbers object.  It  should  have  a  member  function print()
that  prints the English description of the  Numbers object. Demonstrate the class by writing a main 
program that asks the user to enter a number in the proper range and then prints out 
its English description. 
*/

#include <iostream>
#include <string>

using namespace std;

class Numbers {

private:
	int number;
	string numString;
public:
	static const string ones[10];
	static const string teens[10];
	static const string tens[8];
	static const string hundred;
	static const string thousand;

	Numbers(int);
	void print(Numbers);
};

Numbers::Numbers(int num) {
	numString = "";
	number = num;

	if (num < 10) {
		numString = ones[num];
	}
	else if (num < 20) {
		numString = teens[num-10];
	}
	else if (num < 100) {
		numString = tens[(num/10)-2];
		if (num%10 != 0) { numString += " " + ones[number%10]; }
	}
	else if (num < 1000) {
		numString = ones[num/100] + " " + hundred;
		if (num%100 != 0) { numString += " " + tens[((number-((num/100)*100))/10)-2]; }
		if (num%10 != 0) { numString += " " + ones[number%10]; }
	}
	else if (num <= 9999) {
		numString = ones[num/1000] + " " + thousand;
		if (num%1000 != 0) { numString += " " + ones[(number-(num/1000)*1000)/100] + " " + hundred; }
		if (num%100 != 0) { numString += " " + tens[((number-((num/100)*100))/10)-2]; }
		if (num%10 != 0) { numString += " " + ones[number%10]; }
	}
}

void Numbers::print(Numbers n) {
	cout << n.numString;
}

const string Numbers::ones[] = {"zero", "one", "two", "three", "four",
"five", "six", "seven", "eight", "nine"};
const string Numbers::teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
const string Numbers::tens[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
const string Numbers::hundred = "hundred";
const string Numbers::thousand = "thousand";

void main() {
	int numIn;

	cout << "Enter amount (0-9999): ";
	cin >> numIn;
	cout << endl;

	Numbers numOut(numIn);

	numOut.print(numOut);
	cout << endl;

	return; 
}

