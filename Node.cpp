/*
FileName: Node.cpp
Kenny Chetal
June.14.2011

*/

#include "StdAfx.h"
#include "Node.h"


Node::Node(){}

//Initializing Constructor One
//(Parameter Contains Data)
Node::Node(Customer* newdata)
{
    //Global Variable Initialization
    data = newdata;
    next = NULL;
}

//Initializing Constructor Two
//(Parameter contains data and reference to next node)
Node::Node(Customer* newdata, Node *nextnode)
{
    data = newdata;
    next = nextnode;
}

Node::~Node()
{

}

//Data Accessor
//(Retrieves data from object)
Customer* Node::getData()
{
    return data;
}

//Sets Next Node
//NextNode for singly linked list
void Node::setNext(Node *nextnode)
{
    next = nextnode;
}

//Gets Next Node
//NextNode for singly linked list
Node *Node::getNext()
{
    return next;
}