#pragma once
#include <vector>

class BST {
public:
	struct Node {
		Node(int value) : value{value} {};
		int value{ -1 };
		Node* left{ nullptr };
		Node* right{ nullptr };
	};
	BST(std::vector<int> sortedArray);
	bool isInTheTree(int id);
	Node* find(int id);

private:
	Node* root;

	Node* find(Node* node, int id);
	void setUpBinaryTree(std::vector<int> sortedArray);
	void setChild(Node*& current, std::vector<int> chunk);
};

