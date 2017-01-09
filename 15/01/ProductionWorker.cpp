#include "ProductionWorker.h"
#include <iostream>
#include <string>

using namespace std;

void ProductionWorker::showInfo() {
	cout << "ID#:\t\t" << idNum << endl;
	cout << "Name:\t\t" << name << endl;
	cout << "Hire date:\t" << hireDate << endl;
	cout << "Shift:\t\t" << shift << endl;
	cout << "Hourly pay:\t" << payRate << endl;
}