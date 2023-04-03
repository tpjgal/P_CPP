#pragma once
struct ISolver
{
	virtual int Add(int x,int y) = 0 ;
	virtual int Sub(int x,int y) = 0 ;
	virtual ~ISolver()=default ;
};

