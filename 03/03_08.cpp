/*
8.    How Many Widgets?
The  Yukon  Widget  Company  manufactures  widgets  that  weigh  12.5  pounds  each.  
Write a program that calculates how many widgets are stacked on a pallet, based on 
the total weight of the pallet. The program should ask the user how much the pallet 
weighs by itself and with the widgets stacked on it. It should then calculate and display 
the number of widgets stacked on the pallet. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

const float widgetUnitWeight = 12.5f;
float palletWeight, totalWeight;

int numberOfWidgets;

int main() {
	cout << "Pallet weight (lbs): ";
	cin >> palletWeight;
	cout << "Total weight (lbs): ";
	cin >> totalWeight;
	numberOfWidgets = (totalWeight - palletWeight) / widgetUnitWeight;

	cout << "There are " << numberOfWidgets << " widgets." << endl;

	return 0;
}
