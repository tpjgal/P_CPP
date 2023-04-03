#ifndef SCANNER_H
#define SCANNER_H

#include "IScanner.h"
#include <vector>

struct Scanner : IScanner
{
	void scan(std::vector<Document*> docs) override;
};

#endif  //SCANNER_H
