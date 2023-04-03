#ifndef JOURNAL_H
#define JOURNAL_H

#include <iostream>
#include <utility>
#include <vector>

using std::string;
using std::vector;

struct Journal
{
	string         title;
	vector<string> entries;

	explicit Journal(string title) : title{ std::move(title) }
	{
	}
	void add(const string& entry);
};

#endif  //JOURNAL_H

