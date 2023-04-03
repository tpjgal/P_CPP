#ifndef IFAX_H
#define IFAX_H

#include <vector>

class Document;

struct IFax
{
	virtual void fax(std::vector<Document*> docs) = 0;
};


#endif  //IFAX_H

