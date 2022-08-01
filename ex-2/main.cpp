#include "SelectionSort.h"
#include <iostream>

void displayVector(std::vector<int> vector);

int main() {

	SelectionSort selectionSort;

	std::vector<int> testVector{1,11,2,12,50,30,20};

	std::cout << "before sorting:" << std::endl;
	displayVector(testVector);

	selectionSort.sort(testVector);

	std::cout << "after selection sorting:" << std::endl;
	displayVector(testVector);

}

void displayVector(std::vector<int> vector) {
	for (int i = 0; i < vector.size(); i++) {
		std::cout << vector[i] << std::endl;
	}
	std::cout << std::endl;
};