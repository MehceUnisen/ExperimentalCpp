#include "DLinkedList.h"
DLinkedList::DLinkedList(int data) : Node(0), head{ new Node(data) }, tail{ head } {
	
}

void DLinkedList::addNode(int data) {
	Node::Node(data, tail);
	if (tail == head)
	{
		tail = tail->nextNode;
		tail->prevNode = head;
		head->prevNode = tail;
		tail->nextNode = head;
	}

	else {
		tail->nextNode->prevNode = tail;
		tail = tail->nextNode;
		tail->nextNode = head;
		head->prevNode = tail;
	}
}

void DLinkedList::deleteNode() {
	Node* n = tail->prevNode;
	delete tail;
	tail = n;
	tail->nextNode = head;
	head->prevNode = tail;
}

void DLinkedList::printLinkedList() {
	Node* n = head;
	while (n != tail) {
		std::cout << n->data << "\n";
		n = n->nextNode;
	}
}