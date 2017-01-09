#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
protected:
	int idNum;
	string name;
	string hireDate;

public:
	Employee() {
		idNum = 0;
		name = "0NAME";
		hireDate = "00/00/0000";
	}
	Employee(int);
	Employee(string, int, string);
	
	void setIdNum(int id) { idNum = id; }
	void setName(string n) { name = n; }
	void setHireDate(string d) { hireDate = d; }

	int getIdNum() const { return idNum; }
	string getName() const { return name; }
	string getHireDate() const { return hireDate; }
};

#endif