#include <cassert>
#include <iostream>

#include "String.h"

int main(){
	String s1{"C++"} ;
	String s2{"C++"} ;

	std::cout << (void*)s1.GetString() << ":" << s1 << std::endl; 
	std::cout << (void*)s2.GetString() << ":" << s1 << std::endl;

	assert(s1.GetString() != s2.GetString()) ;

	auto p1 = "C++" ;
	auto p2 = "C++" ;
	std::cout << (void*) p1 << std::endl; 
	std::cout << (void*) p2 << std::endl;

	assert(p1 != p2) ;
}
