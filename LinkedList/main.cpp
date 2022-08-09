#include "LinkedList.h"
LinkedList ll;

void baba() {


}

int main() {
	
	for (int64_t i = 0; i < 50000000; i++)
	{
		ll.addNode(i);
	}
	for (int64_t i = 0; i < 50000000; i++)
	{
		ll.deleteNode();
	}
	ll.printLinkedList();

	return 0;
}