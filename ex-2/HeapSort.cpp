#include "HeapSort.h"
#include <algorithm>

void HeapSort::sort(std::vector<int>& vector) {
	
	std::vector<int> result;
	while (vector.size() > 0) {
		maxheapifyVector(vector);
		iter_swap(vector.begin(), vector.end() - 1);
		result.insert(result.begin(), *(vector.end() - 1));
		vector.pop_back();
	}
	vector.swap(result);
	//TODO: Is it a right (most efficient) way to do it?

}

void HeapSort::maxheapifyVector(std::vector<int>& vector) {
	
	//make the vector a max-heap (max-binary-tree stored as an array)
	int lastNonLeafNodeIndex = vector.size() / 2;
	for (int i = lastNonLeafNodeIndex; i >= 0; i--) {
		maxheapifyNode(vector, i);
	}
}

//TODO: Is & before "vector" necessary?
void HeapSort::maxheapifyNode(std::vector<int> &vector, int index) {
	
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
		maxheapifyNode(vector,greatestChildIndex);
	}
}

bool HeapSort::testMaxheapify() {
	
	bool isCorrect{false};

	std::vector<int> test{5,14,10,8,7,9,3,2,4,1};
	std::vector<int> wanted{ 14,8,10,5,7,9,3,2,4,1 };

	maxheapifyNode(test,0);

	if (test == wanted) {
		isCorrect = true;
	}
	
	return isCorrect;
}


