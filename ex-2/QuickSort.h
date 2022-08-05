#pragma once
#include "Sort.h"

class QuickSort :
    public Sort {
public:
    // Inherited via Sort
    virtual void sort(std::vector<int>& vector) override;

private:
    std::vector<int> recursiveQuickSort(std::vector<int> vector);
    int placePivot(std::vector<int> &vector);

};

