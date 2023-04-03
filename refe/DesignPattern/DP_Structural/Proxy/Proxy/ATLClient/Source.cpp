#include <iostream>

#include "ISolver.h"
#include "TestSolver.h"

void UseSolver(ISolver *p) {
	int sum = p->Add(3,5) ;
	std::cout << sum << std::endl ;
}

int main() {
	TestSolver solver ;
	UseSolver(&solver) ;
}
