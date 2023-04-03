#pragma once


ref class RSaticMethod
{
    ref class R1
    {
    };
    value class V1
    {
    };
    V1 vA;
    R1^ rA;
    V1 vB;
    R1^ rB;
    static V1 vC = V1();
    static R1^ rC = gcnew R1();
    RSaticMethod()
    {
        vA = V1();
        rA = gcnew R1();
        vB = V1();
        rB = gcnew R1();
    }
public:
    static void Main()
    {
        RSaticMethod^ r = gcnew RSaticMethod();
       
    }
};
//void main()
//{
//    RSaticMethod::Main();
//}
