#include "DynamicArray.h"
#include <iostream>

int main() {

	DynamicArray dynamicArray;
	dynamicArray.pushBack(1);
	dynamicArray.pushBack(2);
	dynamicArray.pushBack(3);
	dynamicArray.pushBack(4);
	dynamicArray.pushBack(5);

	dynamicArray.set(0,100);
	dynamicArray.set(4, 100);
	dynamicArray.set(5, 100);

	std::cout << "test set() and pushBack():" << std::endl;
	dynamicArray.displayAllElements();

	std::cout << "test get():" << std::endl;
	std::cout << dynamicArray.get(0) << std::endl;
	std::cout << dynamicArray.get(5) << std::endl;

	return 0;
}