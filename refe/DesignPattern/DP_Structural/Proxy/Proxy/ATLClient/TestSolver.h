#pragma once
#include "ISolver.h"
class TestSolver :
	public ISolver
{

public:
	int Add(int x, int y) override;
	int Sub(int x, int y) override;
};

