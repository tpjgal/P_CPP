#pragma once
using namespace System;
ref struct Component
{
    virtual void ActOut()
    {
        Console::WriteLine("Component::ActOut");
    }
};
ref struct MyBasicComponent : Component
{
    virtual void Act() = Component::ActOut
    {
        Console::WriteLine("MyBasicComponent::Act");
    }
};
ref struct MyAdvancedComponent : MyBasicComponent
{
    virtual void Act() override
    {
        Console::WriteLine("MyAdvancedComponent::Act");
    }
};

ref struct Rnameoveride  : MyAdvancedComponent
{
    static void Main()
    {
        MyAdvancedComponent^ ac = gcnew MyAdvancedComponent();
        ac->Act();
        MyBasicComponent^ bc = ac;
        bc->Act();
        Component^ c = bc;
        c->ActOut();
    }
};