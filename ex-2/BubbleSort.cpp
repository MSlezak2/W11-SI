#include "BubbleSort.h"

void BubbleSort::sort(std::vector<int>& vector) {
	
	for (int i = vector.size() - 1; i > 0; i--) { // index of last element of the unsorted part of the vector
		for (int j = 0; j < i; j++) { 
			if (vector[j] > vector[j+1]) {
				std::swap(vector[j], vector[j+1]);
			}
		}
	}
}
