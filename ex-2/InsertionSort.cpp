#include "InsertionSort.h"

void InsertionSort::sort(std::vector<int>& vector) {

	int tempIndex = 0;

	for (int i = 1; i < vector.size(); i++) {
		tempIndex = i;
		while (tempIndex > 0 && vector[tempIndex] < vector[tempIndex - 1]) { // if I reverse the order of the conditions, there will be a runtime error ;)
			std::swap(vector[tempIndex], vector[tempIndex - 1]); // shifting element to the left if it's smaller than one to the left
			tempIndex--;
		}
	}

}
