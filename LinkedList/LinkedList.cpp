#include "LinkedList.h"

LinkedList::LinkedList() :
	tail{nullptr},
	head{nullptr}
{
	
}

void LinkedList::addNode(int data) {
	if (head == nullptr)
	{
		this->head = Node::createNode(data);
		this->tail = this->head;
		
	}
	else {
		tail->nextNode = Node::createNode(data);
		tail= tail->nextNode;
		
	}

}

bool LinkedList::deleteNode() {
	Node* n = head;
	for (size_t i = 0; tail != n->nextNode ; i++)
	{
		n = n->nextNode;
	}
	tail = n;
	tail->nextNode = nullptr;
	return true;
}


void LinkedList::printLinkedList() {
	Node* n = head;
	size_t i;
	for (i = 0; n->nextNode != nullptr ; ++i)
	{
		std::cout <</* i << "th index =>" << */n->data << "\n";
		n = n->nextNode;
	}
	std::cout << i << "th index =>" << n->data << "\n";
	delete(n);
}