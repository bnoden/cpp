/*
4. Areas of Rectangles 
The area of a rectangle is the rectangle’s length times its width. Write a program that 
asks for the length and width of two rectangles. The program should tell the user which 
rectangle has the greater area, or if the areas are the same. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

double r1Length, r1Width, r2Length, r2Width, r1Area, r2Area;

void main() {
	cout << "Length of first rectangle: ";
	cin >> r1Length;
	cout << "Width of first rectangle: ";
	cin >> r1Width;
	cout << "Length of second rectangle: ";
	cin >> r2Length;
	cout << "Width of second rectangle: ";
	cin >> r2Width;

	r1Area = r1Length*r1Width;
	r2Area = r2Length*r2Width;

	cout << "\nRectangle 1 area: " << r1Area << endl;
	cout << "Rectangle 2 area: " << r2Area << endl;

	if (r1Area == r2Area) {
		cout << "Both rectangles have the same area";
	}
	else if (r1Area > r2Area) {
		cout << "Rectangle 1 is greater." << endl;
	}
	else if (r2Area > r1Area) {
		cout << "Rectangle 2 is greater." << endl;
	}

	return;
}
