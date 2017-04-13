/*
5.  Average of Values 
To get the average of a series of values, you add the values up and then divide the sum 
by the number of values. Write a program that stores the following values in five dif-
ferent  variables:  28,  32,  37,  24,  and  33.  The  program  should  first  calculate  the  sum  
of these five variables and store the result in a separate variable named  
sum
. Then, the 
program  should  divide  the    
sum
variable  by  5  to  get  the  average.  Display  the  average  
on the screen. 
*/

#include <iostream>
using namespace std;

int main() {
	int a = 28, b = 32, c = 37, d = 24, e = 33;
	int sum = a+b+c+d+e;
	
	cout << sum/5 << endl;

	return 0; 
}