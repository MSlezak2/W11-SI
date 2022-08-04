#include "QuickSort.h"
#include <iostream>

void QuickSort::sort(std::vector<int>& vector) {
	
	vector = recursiveQuickSort(vector);

}

std::vector<int> QuickSort::recursiveQuickSort(std::vector<int> vector) {

	if (vector.size() <= 1) {
		return vector;
	} else {
		// move pivot to its position, those not greater to the left, not lesser to the right
		// TODO: extract to new function:
		int leftIndex = 0;
		int rightIndex = 0;
		int pivotIndex = vector.size() - 1;

		while (rightIndex < pivotIndex) {
			if (vector[rightIndex] < vector[pivotIndex]) {
				std::swap(vector[leftIndex], vector[rightIndex]);
				leftIndex++;
			}
			rightIndex++;
		}
		std::swap(vector[leftIndex], vector[pivotIndex]);
		pivotIndex = leftIndex;

		// send those to the left from pivot to sorting function (recursion)
		if (pivotIndex > 0) { // if there is something to the right
			std::vector<int> leftSide{ &vector[0], &vector[pivotIndex] };
			leftSide = recursiveQuickSort(leftSide);
			std::copy(leftSide.begin(), leftSide.end(), vector.begin());
		}

		// send those to the right from pivot to sorting function (recursion)
		if (pivotIndex < vector.size() - 1) { // if there is something to the left
			std::vector<int> rightSide{ vector.begin() + pivotIndex + 1, vector.end()};
			rightSide = recursiveQuickSort(rightSide);
			std::copy(rightSide.begin(), rightSide.end(), vector.begin() + pivotIndex + 1);
		}

		return vector;
	}
	
}

