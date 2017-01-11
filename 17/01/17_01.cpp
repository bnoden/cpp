/*
1. Your Own Linked List 
Design  your  own  linked  list  class  to  hold  a  series  of  integers.  The  class  should  have  
member functions for appending, inserting, and deleting nodes. Don’t forget to add a 
destructor that destroys the list. Demonstrate the class with a driver program. 
*/

#include <iostream>
#include "IntList.h"
using namespace std;

void main() {
	IntList list;

	list.appendNode(5);
	list.appendNode(9);
	list.appendNode(17);

	cout << "Here are the initial values:\n";
	list.displayList();
	cout << endl;

	cout << "Now deleting the node in the middle.\n";
	list.deleteNode(9);

	cout << "Here are the nodes left.\n";
	list.displayList();
	cout << endl;

	cout << "Now deleting the last node.\n";
	list.deleteNode(17);

	cout << "Here are the nodes left.\n";
	list.displayList();
	cout << endl;

	cout << "Now deleting the only remaining node.\n";
	list.deleteNode(5);

	cout << "Here are the nodes left.\n";
	list.displayList();

	cout << endl;
	return;
}