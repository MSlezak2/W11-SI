#include "DynamicArray.h"
#include <iostream>

int main() {

	DynamicArray dynamicArray;
	dynamicArray.pushBack(1);
	dynamicArray.pushBack(2);
	dynamicArray.pushBack(3);
	dynamicArray.pushBack(4);
	dynamicArray.pushBack(5);

	dynamicArray.displayAllElements();

	return 0;
}