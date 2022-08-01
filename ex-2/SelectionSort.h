#pragma once
#include "Sort.h"

class SelectionSort :
    public Sort {
public:
    // Inherited via Sort
    virtual void sort(std::vector<int>& vector) override;
};

