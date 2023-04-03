#include <iostream>
#include <windows.h>
#import "E:\Work\BegCppDp\Code\Proxy\MathLibrary\bin\Debug\MathLibrary.tlb" raw_interfaces_only

int main() {
	CoInitialize(nullptr);
	try {
		using namespace MathLibrary;
		//BaseMath* p{};
		MathLibrary::BaseMathPtr ptr{ __uuidof(MathLibrary::Math) };
		long result{};
		ptr->Add(3, 5, &result);
		//result = ptr->Subtract(3, 5);
		std::cout << result << std::endl;

	
	}catch(_com_error &ex) {
		std::cout << ex.ErrorMessage() << std::endl; 
	}
	
	//ptr->Add(3, 5);
}