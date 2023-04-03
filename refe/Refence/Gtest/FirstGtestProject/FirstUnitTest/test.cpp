#include "pch.h"
#include "gtest/gtest.h"

#include "../FirstGtestProject/Addition.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(AdditionTest, CanPass) {
	EXPECT_EQ(1, Addition(0, 1));
}

TEST(ADDTest, CannotPass) {
	EXPECT_EQ(1, Addition(0, 0));
}