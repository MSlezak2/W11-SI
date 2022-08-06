#include "Graph.h"

Graph::Graph() {
	mock();
}

void Graph::mock() {
	User A, B, C, D, E, F;
	A = User("A", "A", std::vector<User*>{&B, &C});
	B = User("B", "B", std::vector<User*>{&A, &E});
	C = User("C", "C", std::vector<User*>{&A, &E});
	D = User("D", "D", std::vector<User*>{&E});
	E = User("E", "E", std::vector<User*>{&B, &C, &D, &F});
	F = User("F", "F", std::vector<User*>{&E});
	nodes.push_back(A);
	nodes.push_back(B);
	nodes.push_back(C);
	nodes.push_back(D);
	nodes.push_back(E);
	nodes.push_back(F);
}
