#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee(int num) {
	idNum = num;
}

Employee::Employee(string n,int id,string h) {
	name =  n;
	idNum = id;
	hireDate = h;
}