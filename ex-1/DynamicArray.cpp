#include "DynamicArray.h"
#include <algorithm>
#include <iostream>


DynamicArray::DynamicArray() {
	currentSize = 0;
	growthFactor = 2;
	initialCapacity = 4;
	currentCapacity = initialCapacity;
	staticArray = new int[initialCapacity];
}

DynamicArray::~DynamicArray() {
	delete[] staticArray;
}

void DynamicArray::pushBack(int newElement) {
	if (currentSize == currentCapacity) {
		reallocate();
	}
	staticArray[currentSize] = newElement;
	currentSize++;
	// TODO: Exception when relocation wasn't succesfull (allocation didn't work or something)
}

int DynamicArray::get(int index) {
	int element;
	if (index >= 0 && index < currentSize) {
		element = staticArray[index];
	} else {
		//TODO: Throw exception
		element = -HUGE_VAL;
	}
	return element;
}

void DynamicArray::set(int index, int value) {
	if (index >= 0 && index < currentSize) {
		staticArray[index] = value;
	} else {
		//TODO: Throw exception
	}
}

void DynamicArray::displayAllElements() {
	if (currentSize > 0) {
		for (int i = 0; i < currentSize; i++) {
			std::cout << staticArray[i] << std::endl;
		}
	}
}

void DynamicArray::reallocate() {
	int* tempArray = new int[currentCapacity];
	int oldCapacity = currentCapacity;

	std::copy(staticArray, &staticArray[currentCapacity], tempArray); // figure out if there's a better way to copy 
	delete[] staticArray;

	currentCapacity *= growthFactor;
	staticArray = new int[currentCapacity];
	std::copy(tempArray, &tempArray[oldCapacity], staticArray);
}
