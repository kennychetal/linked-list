#pragma once


/*
FileName: Node.h
Kenny Chetal
June.14.2011

*/

class Node
{
public:
	//descriptions in cpp files
	typedef int* ElementType;
    Node();
    Node(ElementType newdata);
    Node(ElementType newdata, Node *nextnode);
    Node(const Node& orig);
    Node setData(ElementType newdata);
    ElementType getData();
    void setNext(Node *nextnode);
    ElementType data;
    Node *next;
    Node *getNext();
    virtual ~Node();
};
