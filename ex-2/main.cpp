#include "SelectionSort.h"
#include <iostream>
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

void displayVector(std::vector<int> vector);

int main() {

	//selection sort:
	SelectionSort selectionSort;
	std::vector<int> testVector{ 11,1,2,12,50,30,20 };

	std::cout << "before sorting:" << std::endl;
	displayVector(testVector);

	selectionSort.sort(testVector);
	std::cout << "after selection sorting:" << std::endl;
	displayVector(testVector);

	//bubble sorting
	BubbleSort bubbleSort;
	testVector = { 11,1,2,12,50,30,20 };

	std::cout << "before sorting:" << std::endl;
	displayVector(testVector);

	bubbleSort.sort(testVector);
	std::cout << "after bubble sorting:" << std::endl;	
	displayVector(testVector);

	//insertion sorting
	InsertionSort insertionSort;
	testVector = { 11,1,2,12,50,30,20 };

	std::cout << "before sorting:" << std::endl;
	displayVector(testVector);

	insertionSort.sort(testVector);
	std::cout << "after insertion sorting:" << std::endl;
	displayVector(testVector);

	//merge sorting
	MergeSort mergeSort;
	//std:: cout << mergeSort.testMerge();
	testVector = { 11,1,2,12,50,30,20 };

	std::cout << "before sorting:" << std::endl;
	displayVector(testVector);

	mergeSort.sort(testVector);
	std::cout << "after merge sorting:" << std::endl;
	displayVector(testVector);

	//quick sorting
	QuickSort quickSort;
	//std:: cout << mergeSort.testMerge();
	testVector = { 11,1,2,12,50,30,20 };

	std::cout << "before sorting:" << std::endl;
	displayVector(testVector);

	quickSort.sort(testVector);
	std::cout << "after quick sorting:" << std::endl;
	displayVector(testVector);
}

void displayVector(std::vector<int> vector) {
	for (int i = 0; i < vector.size(); i++) {
		std::cout << vector[i] << std::endl;
	}
	std::cout << std::endl;
};