#pragma once
#include <vector>
#include "User.h"

class Graph {
public:
	Graph();

private:
	void mock();

	std::vector<User> nodes; //TODO: Should I store those nodes in a container in the first place?
	
};

