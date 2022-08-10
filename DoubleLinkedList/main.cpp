#include "DLinkedList.h"

void baba();

int main() {
	
	baba();
	baba();


	return 0;
}

void baba() {
	DLinkedList dll(0);
	uint64_t nodeNum = 50000000;
	for (size_t i = 1; i < nodeNum; i++)
	{
		dll.addNode(i);
	}
	//dll.printLinkedList();
	int a = 31;
	for (size_t i = 0; i < nodeNum - 10; i++)
	{
		dll.deleteNode();
	}
}