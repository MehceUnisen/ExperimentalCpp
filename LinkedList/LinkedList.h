#pragma once

#include "Node.h"
#include <iostream>
#include <thread>

class LinkedList : public Node
{
public:
	
	LinkedList();

	void addNode(int data);
	bool deleteNode();
	
	void printLinkedList();


private:
	Node* head;
	Node* tail;
};

