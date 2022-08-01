#pragma once
class DynamicArray {
public:
	DynamicArray();
	~DynamicArray();
	void pushBack(int newElement);
	int get(int index);
	int operator[](int index);
	void set(int index, int value);
	void displayAllElements();
	void clear();

private:
	int* staticArray;
	int growthFactor;
	int initialCapacity;
	int currentSize;
	int currentCapacity;

	void reallocate();
};

