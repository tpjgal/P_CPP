
/// pch.h is required 
#include "pch.h"

///  Default Template CLR Console App 

//using namespace System;
//
//int main(array<System::String ^> ^args)
//{
//    return 0;
//}
#include "CLR_Constructor.h"
#include "CLR_Method.h"
#include "CLR_Value_Ref.h"
#include "CLR_Struct_Value_Ref.h"
#include "CLR_Static_Method.h"
#include "CLR_Static_Constructor.h"
#include "CLR_Boxing.h"

#include "CLR_Danger_Arraylist.h"

#include "CLR_SafeBoxing.h"

#include "CLR_Marshal.h"
#include "CLR_Custom_Attribute.h"
#include "CLR_Array_Jagged.h"
#include "CLR_Conversion.h";
#include "CLR_Array.h";
#include "CLR_Struct_Virtual.h"
#include "CLR_Interface.h"
#include "CLR_Polymorphsim.h"
#include "CLR_Abstract.h"
#include "CLR_Virtual_NonVirtural.h"
#include "CLR_NonVirtualMethod.h"
#include "CLR_VirtualDervied.h"
#include "CLR_New_override.h"
#include "CLR_nameoverride.h"
#include "CLR_Base_Class.h"

#include "CLR_Pointer.h"
#include "CLR_Multicast.h"
#include "CLR_Index.h"

using namespace System;

/// <summary>
/// Main Function. 
/// </summary>
void main()
{   

    CLR_Constructor::Main();

    Console::WriteLine("Method: ");
    CLR_Method::Main();
    Console::WriteLine("Ref and Value: ");



    R::Main();
  

    RSaticMethod::Main();

    RStaticConstructor^ r;
    Console::WriteLine("in main()");
    r = gcnew RStaticConstructor();


    RBoxing::Main();

    RDangerArray::Main();

    RSafeBoxing::Main();

    RMarshal::Hello(L'A');

    RCustomeAttribute::LoadMe();

    RArrayJagged::Main();

    TestConversion(1, 2, 3, 4.2f);

    RArray::Main();
    Rstructvirtual::Main();

    RInterface::Main();


    //RPolymorphsim::Main();

    //RAbstract::Main();
   // RVirtualNonVirtual::Main();

    //RNonvirtualMethod::Main();


   // RVirtualDerived::Main();

   // RnewOverride::Main();

    //Rnameoveride::Main();

   // Rnameoveride::Main();

    RPointer::Main();
    RMulticast::Main();
    RIndex::Main();
   // RProtection::Main();
}
