#pragma once
#include "Sort.h"
class MergeSort :
    public Sort {
public:
    // Inherited via Sort
    virtual void sort(std::vector<int>& vector) override;
    bool testMerge();

private:
    std::vector<int> recursiveMergeSort(std::vector<int>& vector);
    std::vector<int> merge(std::vector<int> leftHalf, std::vector<int> rightHalf);

    /*std::vector<int>& splitLeft(std::vector<int>& vector);
    std::vector<int>& splitRight(std::vector<int>& vector);*/
};

