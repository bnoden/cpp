// This program totals and averages the sales figures for any
// number of days. The figures are stored in a dynamically
// allocated array.

/*
The  statement  in  line  23  dynamically  allocates  memory  for  an  array  of    
doubles,  using the value in numDays as  the  number  of  elements.  The new operator
returns  the  starting  address  of  the  chunk  of  memory,  which  is  assigned  to  the    
sales pointer  variable.  The sales variable is then used throughout the program to store
the sales amounts in the array and perform the necessary calculations. In line 48 the  
delete operator is used to free the allocated memory.

Notice that in line 49 the value nullptr is assigned to the sales pointer. It is a good prac-
tice  to  set  a  pointer  variable  to nullptr after  using delete on  it.  First,  it  prevents  code  
from inadvertently using the pointer to access the area of memory that was freed. Second, 
it prevents errors from occurring if delete is accidentally called on the pointer again. The 
delete operator is designed to have no effect when used on a null pointer. 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double *sales = nullptr,	// To dynamically allocate an array
    total = 0.0,				// Accumulator
    average;					// To hold average sales
    int numDays,				// To hold the number of days of sales
        count;					// Counter variable

    // Get the number of days of sales.
    cout << "How many days of sales figures do you wish ";
    cout << "to process? ";
    cin >> numDays;

    // Dynamically allocate an array large enough to hold
    // that many days of sales amounts.
    sales = new double[numDays];

    // Get the sales figures for each day.
    cout << "Enter the sales figures below.\n";
    for (count = 0; count < numDays; count++)
    {
		cout << "Day " << (count + 1) << ": ";
		cin >> sales[count];
    }

    // Calculate the total sales
    for (count = 0; count < numDays; count++)
    {
		total += sales[count];
    }

    // Calculate the average sales per day
    average = total / numDays;

    // Display the results
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;

    // Free dynamically allocated memory
    delete [] sales;
    sales = nullptr; // Make sales a nullptr.

    return 0;
} 