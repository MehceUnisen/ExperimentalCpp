#pragma once

#include "Node.h"
#include <iostream>

class DLinkedList : public Node
{
public:
	DLinkedList(int data);
	void addNode(int data);
	void deleteNode();
	void printLinkedList();

private:
	Node* head;
	Node* tail;
	
};

