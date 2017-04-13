/*
18.  Energy Drink Consumption 
A  soft  drink  company  recently  surveyed  16,500  of  its  customers  and  found  that  
approximately  15  percent  of  those  surveyed  purchase  one  or  more  energy  drinks  per  
week.  Of  those  customers  who  purchase  energy  drinks,  approximately  58  percent  of  
them prefer citrus-flavored energy drinks. Write a program that displays the following: 
• The  approximate  number  of  customers  in  the  survey  who  purchase  one  or  more  
energy drinks per week 
• The approximate number of customers in the survey who prefer citrus-flavored energy 
drinks 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int customers = 16500;
int eDrinkers = customers * 0.15;
int cDrinkers = eDrinkers * 0.58;

int main() {
	cout << "Number of customers surveyed: " << customers << endl;
	cout << "Purchase one or more energy drink per week: " << eDrinkers << endl;
	cout << "Prefer citrus-flavored energy drinks: " << cDrinkers << endl;
	cout << "(Numbers are approximate.)" << endl;

	return 0;
}