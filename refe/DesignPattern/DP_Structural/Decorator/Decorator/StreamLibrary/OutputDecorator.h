#pragma once
#include "OutputStream.h"
class OutputDecorator :
	public OutputStream
{
	OutputStream *m_pOS{} ;
public:

	OutputDecorator(OutputStream* pOs)
		: m_pOS{pOs} {
	}

	void Write(const std::string& text) override = 0;
	void Close() override = 0;
};

