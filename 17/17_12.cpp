/*
Modify the NumberList class  shown  in  this  chapter  to  include  a  member  function  
named  mergeArray. The  mergeArray function should take an array of  doubles as its 
first argument and an integer as its second argument. (The second argument will specify 
the size of the array being passed into the first argument.) 

The  function  should  merge  the  values  in  the  array  into  the  linked  list.  The  value  in  
each element of the array should be inserted (not appended) into the linked list. When 
the  values  are  inserted,  they  should  be  in  numerical  order.  Demonstrate  the  function  
with  a  driver  program.  When  you  are  satisfied  with  the  function,  incorporate  it  into  
the  LinkedList template. 
*/

#include <iostream>

using namespace std;

#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
	struct ListNode
	{
		double value;
		struct ListNode *next;
	}; 

	ListNode *head;

public:
	NumberList() { head = nullptr; }
	~NumberList();

	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displayList() const;
	void sortArray(double[], int);
	void mergeArray(double[], int);
};
#endif

void NumberList::mergeArray(double arr[],int size) {
	NumberList::sortArray(arr, size);
	for (int i = 0; i < size; i++) {
		NumberList::insertNode(arr[i]);
	}
}

void NumberList::sortArray(double array[], int size)
{
	bool swap;
	double temp;

	do {
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

void NumberList::appendNode(double num) {
	ListNode *newNode;
	ListNode *nodePtr;

	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;

	if (!head)
		head = newNode;
	else {
		nodePtr = head;
		while (nodePtr->next)
			nodePtr = nodePtr->next;
		nodePtr->next = newNode;
	}
}

void NumberList::displayList() const {
	ListNode *nodePtr;
	nodePtr = head;
	while (nodePtr) {
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
}

void NumberList::insertNode(double num) {
	ListNode *newNode;
	ListNode *nodePtr;
	ListNode *previousNode = nullptr; 

	newNode = new ListNode;
	newNode->value = num;

	if (!head) {
		head = newNode;
		newNode->next = nullptr;
	}
	else {
		nodePtr = head; 
		previousNode = nullptr; 
		while (nodePtr != nullptr && nodePtr->value < num) {  
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		} 
		if (previousNode == nullptr) {
			head = newNode;
			newNode->next = nodePtr;
		}
		else {
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

void NumberList::deleteNode(double num) {
	ListNode *nodePtr;
	ListNode *previousNode;

	if (!head) { return; }

	if (head->value == num) {
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else {
		nodePtr = head;

		while (nodePtr != nullptr && nodePtr->value != num) {  
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (nodePtr) {
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

NumberList::~NumberList()
{
	ListNode *nodePtr;
	ListNode *nextNode;
	nodePtr = head;

	while (nodePtr != nullptr) {
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}

int main()
{
	NumberList list;

	list.appendNode(3.2);
	list.appendNode(6.4);
	list.appendNode(11.32);
	list.appendNode(14.16);
	cout << "NumberList before merge: " << endl;
	list.displayList();

	double mArray[] = {3.4, 7.23, 1.578, 19.23, 2.45};
	
	list.mergeArray(mArray, 5);
	cout << "\nNumberList after merge: " << endl;
	list.displayList();

	return 0;
}