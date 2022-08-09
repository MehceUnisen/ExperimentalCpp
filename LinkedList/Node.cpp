#include "Node.h"

Node* Node::createNode(int data) {
	Node* n_node = new Node();
	n_node->data = data;
	n_node->nextNode = nullptr;

	return n_node;
}
