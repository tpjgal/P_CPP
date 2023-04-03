#include "WidgetController.h"
#include "IWidget.h"
WidgetController::WidgetController(IWidget& w) :myWidget(w)
{
    myWidget.Off();
}
WidgetController::~WidgetController()
{
    myWidget.Off();
}
void WidgetController::exec()
{
    myWidget.On();
}

