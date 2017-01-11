#include <iostream>
#include "IntList.h"
using namespace std;

void IntList::appendNode(int num) {
	ListNode *newNode;
	ListNode *nodePtr;

	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;

	if (!head) { head = newNode; }
	else {
		nodePtr = head;

		while (nodePtr->next) {
			nodePtr = nodePtr->next;
		}

		nodePtr->next = newNode;
	}
}

void IntList::insertNode(int num) {
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

void IntList::deleteNode(int num) {
	ListNode *nodePtr;
	ListNode *previousNode;

	if (!head) { return; }

	if (head->value == num)	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else {
		nodePtr = head;

		while (nodePtr != nullptr && nodePtr->value != num)	{  
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (nodePtr) {
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

void IntList::displayList() const {
	ListNode *nodePtr;
	nodePtr = head;

	while (nodePtr)	{
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
}

IntList::~IntList() {
	ListNode *nodePtr;
	ListNode *nextNode;

	nodePtr = head;

	while (nodePtr != nullptr) {
		nextNode = nodePtr->next;

		delete nodePtr;

		nodePtr = nextNode;
	}
}