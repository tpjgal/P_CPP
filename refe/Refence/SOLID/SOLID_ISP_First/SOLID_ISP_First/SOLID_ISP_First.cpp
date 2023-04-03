#include <iostream>
#include "Document.h"
#include "Fax.h"
#include "IFax.h"
#include "IMachine.h"
#include "IPrinter.h"
#include "IScanner.h"
#include "Machine.h"
#include "Printer.h"
#include "Scanner.h"
 
/// \brief Interface Segregation Principle.
/// \example Multifunction printer: interface for each
void IspExample()
{
	std::cout << "ISP Interface Segregation Principle\n";

	Printer* p = new Printer();
	Printer                p2;
	std::vector<Document*> docs{};
	p->print(docs);
	p2.print(docs);

	Scanner* s = new Scanner();
	Scanner  s2;
	s->scan(docs);
	s2.scan(docs);

	Fax* f = new Fax();
	Fax  f2;
	f->fax(docs);
	f2.fax(docs);

	Machine m(*p, *s, *f);
	m.print(docs);
	m.scan(docs);
	m.fax(docs);

	Machine m2(p2, s2, f2);
	m2.print(docs);
	m2.scan(docs);
	m2.fax(docs);

	Machine* m3 = new Machine(*p, *s, *f);
	m3->print(docs);

	std::cout << "End ISP\n";
}

int main()
{
	IspExample();
	std::cout << "\n";
}

