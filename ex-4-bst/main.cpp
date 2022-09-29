#include <vector>
#include "BST.h"

int main() {

	std::vector<int> testSortedArray = {0, 1, 2, 3, 4, 5, 7, 8};
	BST bst(testSortedArray);
	bst.add(6);
	bst.removeNaive(2);

	bool test1 = bst.isInTheTree(0);
	bool test2 = bst.isInTheTree(3);
	bool test3 = bst.isInTheTree(6);
	bool test4 = bst.isInTheTree(8);
	bool test5 = bst.isInTheTree(-1);
	bool test6 = bst.isInTheTree(10);

	return 0;
}