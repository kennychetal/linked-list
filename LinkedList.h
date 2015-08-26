#pragma once
#include <string>
#include "Node.h"
#include "Customer.h"

/*
FileName: LinkedList.h
Kenny Chetal
June.14.2011

*/
using namespace std;

class LinkedList {
public:
	//descriptions in cpp files
    LinkedList();
    LinkedList(const LinkedList& orig);
    virtual ~LinkedList();
    bool isEmpty();
    int getSize();
    void add(int index, Customer* data);
    void remove(int index);
    Customer* get(int index);
    void removeAll();
    void *getHead();
    Node *head;
    int numitems;
    Node *find(int index);
    Node *find(int offset, Node *curr);


private:


};
