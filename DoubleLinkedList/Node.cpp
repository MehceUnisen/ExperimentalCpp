#include "Node.h"

Node::Node(int data, Node* n) {
	
	n->nextNode = new Node(data);
}

Node::Node(int data) : nextNode{ nullptr }, prevNode{ nullptr }, data{ data } {

}