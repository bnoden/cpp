/*
3. Minimum/Maximum Templates 
Write  templates  for  the  two  functions minimum and maximum.  The minimum function  
should  accept  two  arguments  and  return  the  value  of  the  argument  that  is  the  lesser  
of the two. The  maximum function should accept two arguments and return the value 
of  the  argument  that  is  the  greater  of  the  two.  Design  a  simple  driver  program  that  
demonstrates the templates with various data types. 
*/

#include <iostream>
#include <string>

using namespace std;

template <class T>
T minimum(T val1,T val2) {
	return val1 < val2 ? val1 : val2;
}

template <class T>
T maximum(T val1,T val2) {
	return val1 > val2 ? val1 : val2;
}

void main() {
	int num1, num2;
	string word1, word2;
	
	cout << "Enter two numbers." << endl;
	cout << "First number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	cout << endl;
	cout << "The smallest is " << minimum(num1, num2) << " and the largest is "
		<< maximum(num1, num2) << endl;
	cout << endl;
	
	cout << "Enter two words." << endl;
	cout << "First word: ";
	cin >> word1;
	cout << "Second word: ";
	cin >> word2;
	cout << endl;
	cout << minimum(word1, word2) << " comes before " << maximum(word1, word2) << endl;

	cout << endl;

	return; 
}
