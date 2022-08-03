#include "MergeSort.h"
#include <iostream>

void MergeSort::sort(std::vector<int>& vector) {
	
	vector = recursiveMergeSort(vector);

}

std::vector<int> MergeSort::recursiveMergeSort(std::vector<int>& vector) {
	
	if (vector.size() <= 1) {
		//if it's a base case (empty or single-element vector) return that vector
		return vector;
	} else {
		//if not, split
		int middleElementIndex = vector.size() / 2;
		std::vector<int> leftHalf(vector.begin(), vector.begin() + middleElementIndex);
		std::vector<int> rightHalf(vector.begin() + (middleElementIndex), vector.end());

		//call the same function on left vector
		leftHalf = recursiveMergeSort(leftHalf);
		//call it on the right one
		rightHalf = recursiveMergeSort(rightHalf);

		//merge
		std::vector<int> mergedVector = merge(leftHalf, rightHalf);

		//return sorted vector
		return mergedVector;
	}

}

std::vector<int> MergeSort::merge(std::vector<int> leftHalf, std::vector<int> rightHalf) {
	
	std::vector<int> mergedVector;
	int leftIndex = 0;
	int rightIndex = 0;

	while (leftIndex < leftHalf.size() && rightIndex < rightHalf.size()) {
		if (leftHalf[leftIndex] < rightHalf[rightIndex]) {
			mergedVector.push_back(leftHalf[leftIndex]);
			leftIndex++;
		} else {
			mergedVector.push_back(rightHalf[rightIndex]);
			rightIndex++;
		}
	}

	if (leftIndex < leftHalf.size()) {
		mergedVector.insert(mergedVector.end(), leftHalf.begin() + leftIndex, leftHalf.end());
	}

	if (rightIndex < rightHalf.size()) {
		mergedVector.insert(mergedVector.end(), rightHalf.begin() + rightIndex, rightHalf.end());
	}

	return mergedVector;
}

bool MergeSort::testMerge() {

	bool testResult = true;
	std::vector<int> leftHalf, rightHalf, expectedMergedVector;
	
	// test case #1:
	leftHalf = {1,2,3,4};
	rightHalf = { 5,6,7,8 };
	expectedMergedVector = {1,2,3,4,5,6,7,8};
	if (!(merge(leftHalf, rightHalf) == expectedMergedVector)) {
		testResult = false;
		std::cout << "Test case #1a : failed";
	}
	if (!(merge(rightHalf, leftHalf) == expectedMergedVector)) {
		testResult = false;
		std::cout << "Test case #1b : failed";
	}
	
	// test case #2:
	leftHalf = { 1,11,21,31 };
	rightHalf = { 2,12,22,32 };
	expectedMergedVector = { 1,2,11,12,21,22,31,32 };
	if (!(merge(leftHalf, rightHalf) == expectedMergedVector)) {
		testResult = false;
		std::cout << "Test case #2a : failed";
	}
	if (!(merge(rightHalf, leftHalf) == expectedMergedVector)) {
		testResult = false;
		std::cout << "Test case #2b : failed";
	}

	// test case #1:
	leftHalf = { 100,200,700,800};
	rightHalf = { 300,400,500,600 };
	expectedMergedVector = { 100,200,300,400,500,600,700,800 };
	if (!(merge(leftHalf, rightHalf) == expectedMergedVector)) {
		testResult = false;
		std::cout << "Test case #3a : failed";
	}
	if (!(merge(rightHalf, leftHalf) == expectedMergedVector)) {
		testResult = false;
		std::cout << "Test case #3b : failed";
	}

	return testResult;
}

//std::vector<int>& MergeSort::splitLeft(std::vector<int>& vector) {
//	
//	std::vector<int> leftHalf(vector.begin(), (vector.begin() + vector.size() / 2));
//
//	return leftHalf;
//}

