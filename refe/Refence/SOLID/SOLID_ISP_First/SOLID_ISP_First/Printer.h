#ifndef PRINTER_H
#define PRINTER_H

#include "IPrinter.h"

struct Printer : IPrinter
{
	void print(std::vector<Document*> docs) override;
};
#endif  //PRINTER_H
