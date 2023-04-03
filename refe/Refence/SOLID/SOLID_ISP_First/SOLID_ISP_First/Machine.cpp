#include "Machine.h"

void Machine::print(std::vector<Document*> docs)
{
	_printer.print(docs);
}
void Machine::scan(std::vector<Document*> docs)
{
	_scanner.scan(docs);
}
void Machine::fax(std::vector<Document*> docs)
{
	_fax.fax(docs);
}