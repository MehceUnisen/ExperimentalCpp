#include <iostream>
#include <thread>
#include <memory>

std::thread* worker;

void doWork() {
	while (true) {
		std::cout << "hello world\n";
	}
}

void doAnotherWork() {
	while (true) {
		{
			std::cout << "Doing another work\n";
		}
	}
}

std::thread notWorker(doAnotherWork);
//this feels like a bug

int main() {
	std::cin.get();
	worker = new std::thread(doWork);
	std::cin.get();
	notWorker.join();
	notWorker.detach();
	// you dont have to join the public thread
	// just make sure to detach before main thread exits
	return 0;
}