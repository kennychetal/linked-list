#include "StdAfx.h"
#include "LinkedList.h"

/*
FileName: LinkedList.cpp
AuthorName: Kenny Chetal

June.14.2011

*/


//Global Variable Initialization
LinkedList::LinkedList()
{
    head = NULL;
    numitems = 0;
}

LinkedList::~LinkedList()
{
}

//Checks if linkedList is empty
bool LinkedList::isEmpty()
{
    if (head==NULL)
        return true;
    return false;
}

//Returns size of linkedlist
int LinkedList::getSize()
{
    return numitems;
}

//Add method adds node to linkedlist
//If index>=1 and index <= numitems+1
//this insures that the index is something valid in range
void LinkedList::add(int index, Customer* data)
{
    if (index>=1 && index <= numitems+1)
    {
        if (index==1)
        {
            Node *newnode = new Node(data,head);
            head = newnode;
            numitems++;
        }
        else
        {
            Node *prev = find(index-1);
            Node *newNode = new Node(data,prev->getNext());
            prev->setNext(newNode);
            numitems++;
        }
    }
}

//Remove method removes node to linkedlist
//If index>=1 and index <= numitems
//this insures that the index is something valid in range
void LinkedList::remove(int index)
{
    if(index>=1 && index<=numitems)
    {
        if (index==1)
        {
        head=head->getNext();
        numitems--;
        }
        else
        {
        Node *prev = find(index-1);
        Node *curr = prev->getNext();
        prev->setNext(curr->getNext());
        numitems--;
        }
    }
}

//Retrieves pointers data
//Node data returned is the Index inputted
Customer* LinkedList::get(int index)
{
    Customer* dataitem = new Customer();
    if (index >=1 && index <=numitems)
    {
        Node *curr = find(index);
        dataitem = curr->getData();
        return dataitem;
    }
    return NULL;
}

//Sets head to null
//numitems is set to zero
//thus deleting the singly linked list
void LinkedList::removeAll()
{
    head = NULL;
    numitems = 0;
}

//retrieves head of linkedlist
void *LinkedList::getHead()
{
    return head;
}

/* Singly Linked list goes from 1-N
 * Find method searches the singly linked list
 * Node returned is the Index inputted
 * Is done recursively
*/
Node *LinkedList::find(int index)
{
    return find(index, head);
}

Node *LinkedList::find(int offset, Node *curr)
{
    if(offset==1)
        return curr;
    if(curr->getNext()==NULL)
        return NULL;
    return find(offset-1, curr->getNext());
}
