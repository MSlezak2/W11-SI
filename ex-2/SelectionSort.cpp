#include "SelectionSort.h"
//#include <iterator>
#include <iostream>

void SelectionSort::sort(std::vector<int>& vector) {

	int currentMin;
	int currentMinIndex;

	for (int i = 0; i < vector.size(); i++) {
		currentMin = 3200000;
		currentMinIndex = i;
		for (int j = i;  j < vector.size();  j++) {
			if (vector[j] < currentMin) {
				currentMin = vector[j];
				currentMinIndex = j;
			}
		}
		//swap i-th element with currentMinIndex-th element
		std::swap(vector[i], vector[currentMinIndex]);
	}
	//TODO: Maybe I should use pointers?
}
