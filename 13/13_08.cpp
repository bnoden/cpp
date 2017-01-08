/*
8. Circle Class 
Write a  Circle class that has the following member variables: 
•  radius: a double
•  pi: a double initialized with the value 3.14159 
The class should have the following member functions: 
•  Default Constructor. A default constructor that sets radius to 0.0. 
•  Constructor. Accepts the radius of the circle as an argument. 
•  setRadius. A mutator function for the radius variable. 
•  getRadius. An accessor function for the radius variable. 
•  getArea. Returns the area of the circle, which is calculated as 
area = pi * radius * radius 
•  getDiameter.
Returns the diameter of the circle, which is calculated as 
diameter = radius * 2 
•  getCircumference. Returns the circumference of the circle, which is calculated as 
circumference = 2 * pi * radius 
Write a program that demonstrates the Circle class by asking the user for the circle’s 
radius,  creating  a  Circle object,  and  then  reporting  the  circle’s  area,  diameter,  and  
circumference. 
*/

#include <iostream>
#include <string>

using namespace std;

class Circle {

private:
	double radius;

public:
	const double pi = 3.14159;

	Circle() {radius = 0.0;}
	Circle(double r) {radius = r;}

	void showCircle();

	void setRadius(double r) {radius = r;}

	double getRadius() const {return radius;}
	double getArea() const {return pi*radius*radius;}
	double getDiameter() const {return radius*2.0;}
	double getCircumference() const {return 2*pi*radius;}
};

void Circle::showCircle() {
	cout << "Area: " << getArea() << endl;
	cout << "Diameter: " << getDiameter() << endl;
	cout << "Circumference: " << getCircumference() << endl;
}

void main() {
	double inputRadius = 0.0;

	while (!(inputRadius > 0)) {
		cout << "Enter radius: ";
		cin >> inputRadius;
		cout << endl;
	}

	Circle circle(inputRadius);

	circle.showCircle();

	cout << endl;
	return; 
}

