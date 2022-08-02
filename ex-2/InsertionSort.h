#pragma once
#include "Sort.h"

class InsertionSort :
    public Sort {
public:

    // Inherited via Sort
    virtual void sort(std::vector<int>& vector) override;

};

