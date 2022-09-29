#include "BST.h"

BST::BST(std::vector<int> sortedArray) {
    setUpBinaryTree(sortedArray);
}

bool BST::isInTheTree(int id) {
    bool isInTheTree;
    Node* searchingResult = find(id);

    if (searchingResult != nullptr) {
        isInTheTree = true;
    } else {
        isInTheTree = false;
    }
    
    return isInTheTree;
}

BST::Node* BST::find(int id) {
    return find(root, id);
}

void BST::add(int value) {
    add(root, value);
}

void BST::removeNaive(int value) {
    removeNaive(root, value);
}

void BST::removeNaive(Node*& current, int value) {
    if (current != nullptr) {
        if (value == current->value) {
            deleteChildren(current);
        } else if (value < current->value) {
            removeNaive(current->left, value);
        } else {
            removeNaive(current->right, value);
        }
    }
}

void BST::deleteChildren(Node*& current) {
    if (current != nullptr) {
        if (current->left == nullptr && current->right == nullptr) { // when it's leaf
            delete current;
            current = nullptr;
        } else {
            deleteChildren(current->left);
            deleteChildren(current->right);
            delete current;
            current = nullptr;
        }
    }
}

void BST::add(Node*& current, int value) {
    if (current == nullptr) {
        current = new Node(value);
    } else {
        if (value <= current->value) {
            add(current->left, value);
        } else {
            add(current->right, value);
        }
    }
}

BST::Node* BST::find(Node* node, int id) {
    Node* result{ nullptr };

    if (node->value == id) {
        result = node;
    } else {
        if (id < node->value && node->left != nullptr) {
            result = find(node->left, id);
        } else if (id > node->value && node->right != nullptr) {
            result = find(node->right, id);
        } else {
            result = nullptr;
        }
    }

    return result;
}

void BST::setUpBinaryTree(std::vector<int> sortedArray) {

    setChild(root, sortedArray);

}

void BST::setChild(Node*& current, std::vector<int> chunk) {
    if (chunk.size() == 0) { 
        // do nothing - stop recursion
    }else if (chunk.size() == 1) { 
        current = new Node(chunk[0]); // find the leaf - stop recursion
    } else {
        int middleElementIndex = chunk.size() / 2;
        current = new Node(chunk[middleElementIndex]); // find the node
        if (current->left == nullptr) { 
            std::vector<int> leftChunk(chunk.begin(), chunk.begin() + middleElementIndex); // split array into LEFT part... 
            setChild(current->left, leftChunk); // find left child node
        }
        if (current->left != nullptr && current->right == nullptr) {
            std::vector<int> rightChunk(chunk.begin() + middleElementIndex + 1, chunk.end()); // ... and RIGHT part
            setChild(current->right, rightChunk); // find left child node              
        }
    }
}

