#pragma once
class DynamicArray {
public:
	DynamicArray();
	~DynamicArray();
	void pushBack(int newElement);
	void displayAllElements();

private:
	int* staticArray;
	int growthFactor;
	int initialCapacity;
	int currentSize;
	int currentCapacity;

	void reallocate();
};

