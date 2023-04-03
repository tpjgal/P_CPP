#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../FirstGMock/IWidget.h"
class MockWidget : public IWidget
{
public:
    MOCK_METHOD0(On, void());
    MOCK_METHOD0(Off, void());
};
#include "../FirstGMock/WidgetController.h"
TEST(TestWidgetController, testConstructor)
{
    MockWidget mw;
    EXPECT_CALL(mw, Off()).Times(2);
    WidgetController wc(mw);
}

TEST(TestWidgetController, testConstructorfail)
{
    MockWidget mw;
    //    EXPECT_CALL(mw, Off()).Times(2);
    EXPECT_CALL(mw, Off());
    WidgetController wc(mw);
}