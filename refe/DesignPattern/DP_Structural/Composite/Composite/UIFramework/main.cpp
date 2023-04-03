#include "Button.h"
#include "Frame.h"

int main() {
	Frame mainWindow{} ;
	Button btnOk ;
	mainWindow.AddChild(&btnOk) ;
	mainWindow.Paint() ;

	//auto p = mainWindow.GetFrame() ;
	//if(p) {
	//	p->AddChild(&btnOk) ;
	//}
	//mainWindow.Paint() ;
	auto parent = btnOk.GetParent() ;
	parent->Paint() ;
	
}
