#ifndef INTLIST_H
#define INTLIST_H

class IntList {
private:
   struct ListNode {
      int value;
      struct ListNode *next;
   };

   ListNode *head;

public:
   IntList() { head = nullptr; }
   ~IntList();

   void appendNode(int);
   void insertNode(int);
   void deleteNode(int);
   void displayList() const;

};


#endif