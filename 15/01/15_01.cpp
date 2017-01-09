/*
1. Employee and ProductionWorker Classes 
Design a class named Employee. The class should keep the following information in 
•	Employee name 
•	Employee number 
•	Hire date 
Write  one  or  more  constructors  and  the  appropriate  accessor  and  mutator  functions  
for the class. 

Next, write a class named ProductionWorker that is derived from the Employee class. 
The ProductionWorker class  should  have  member  variables  to  hold  the  following  
information: 
•      Shift (an integer) 
•      Hourly pay rate (a  double) 
The workday is divided into two shifts: day and night. The shift variable will hold an 
integer value representing the shift that the employee works. The day shift is shift 1, and 
the night shift is shift 2. Write one or more constructors and the appropriate accessor 
and mutator functions for the class. Demonstrate the classes by writing a program that 
uses a  ProductionWorker object. 
*/

#include "ProductionWorker.h"
#include <iostream>

using namespace std;

void main() {
	ProductionWorker worker(2, 12.45);
	worker.setIdNum(100001);
	worker.setName("Johnson, Steve Patch");
	worker.setHireDate("01/09/2017");

	worker.showInfo();

	return; 
}
