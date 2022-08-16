#pragma once
#include "Sort.h"
class HeapSort :
    public Sort {
public:
    // Inherited via Sort
    virtual void sort(std::vector<int>& vector) override;
    bool testMaxheapify();

private:
    void maxheapify(std::vector<int> &vector, int index);
};

