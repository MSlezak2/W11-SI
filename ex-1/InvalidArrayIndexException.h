#pragma once
#include <stdexcept>

class InvalidArrayIndexException : public std::runtime_error {
public:
	InvalidArrayIndexException() : std::runtime_error{ "Index out of range of the array" } {};
};

