#include "Journal.h"
#include "PersistenceManager.h"
void Journal::add(const string& entry)
{
	static int count = 1;
	entries.push_back(std::to_string(count++) + ": " + entry);
}