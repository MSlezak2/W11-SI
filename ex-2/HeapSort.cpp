#include "HeapSort.h"
#include <algorithm>

void HeapSort::sort(std::vector<int>& vector) {
	


}

//TODO: Is & before "vector" necessary?
void HeapSort::maxheapify(std::vector<int> &vector, int index) {
	
	// -1 if there's no child
	int leftChildIndex{ ((2 * index + 1) < vector.size()) ? (2 * index + 1) : -1 };
	int rightChildIndex{ ((2 * index + 2) < vector.size()) ? (2 * index + 2) : -1 };

	int greatestChildIndex{ 0 };

	// make sure those indexes point to something (node has at least one children)
	// -1 index-th element is a leaf
	if (leftChildIndex > -1 && rightChildIndex > -1) {
		greatestChildIndex = (vector[leftChildIndex] > vector[rightChildIndex])
			? leftChildIndex : rightChildIndex;
	} else if (leftChildIndex > -1) {
		greatestChildIndex = leftChildIndex;
	} else if (rightChildIndex > -1) {
		greatestChildIndex = rightChildIndex;
	} else {
		greatestChildIndex = -1;
	}

	if (greatestChildIndex != -1 && vector[index] < vector[greatestChildIndex]) {
		std::swap(vector[index], vector[greatestChildIndex]);
		maxheapify(vector,greatestChildIndex);
	}
}

bool HeapSort::testMaxheapify() {
	
	bool isCorrect{false};

	std::vector<int> test{5,14,10,8,7,9,3,2,4,1};
	std::vector<int> wanted{ 14,8,10,5,7,9,3,2,4,1 };

	maxheapify(test,0);

	if (test == wanted) {
		isCorrect = true;
	}
	
	return isCorrect;
}


