#pragma once
class IWidget;
class WidgetController
{
public:
    WidgetController(IWidget& w);
    ~WidgetController(void);
    void exec();
private:
    IWidget& myWidget;
};

