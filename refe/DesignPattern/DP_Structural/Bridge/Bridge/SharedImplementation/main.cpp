#include <iostream>

#include "SharedString.h"
#include "String.h"

int main() {
	SharedString s{"C++"} ;
	auto s2{s} ;
	SharedString s3 ;
	s3 = s ;

	s.Assign("New string") ;

}
