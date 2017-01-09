#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee {
private:
	int shift;	// day=1 night=2
	double payRate;	// hourly

public:
	void setShift(int s) { shift = s; }
	void setPayRate(double p) { payRate = p; }
	int getShift() { return shift; }
	double getPayRate() { return payRate; }
	void showInfo();

	ProductionWorker() {
		shift = 0;
		payRate = 0.0;
	}
	ProductionWorker(int s,double p) {
		shift = s;
		payRate = p;
	}
	
};

#endif