#pragma once
class IWidget
{
public:
    virtual void On() = 0;
    virtual void Off() = 0;
};