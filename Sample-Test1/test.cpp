#include "pch.h"
#include "../project15/Cal.cpp"
TEST(TestCaseName, TestName) {
	string input1 = "ABC";
	string input2 = "BBY";
	Cal cal;
	int ret = cal.getLengthPoint(input1, input2);
	EXPECT_EQ(60, ret);
}