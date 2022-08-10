#pragma once
class Node
{
public:
	Node(int data);
	Node(int data, Node* n);
	~Node(){}

	int data;
	Node* nextNode;
	Node* prevNode;
};

