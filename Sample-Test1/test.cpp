#include "pch.h"
#include "../project15/Cal.cpp"
TEST(TestCaseName, getReturnSameLengthPoint) {
	string input1 = "ABC";
	string input2 = "BBY";
	Cal cal;
	int ret = cal.getLengthPoint(input1, input2);
	EXPECT_EQ(60, ret);
}

TEST(TestCaseName, getReturnPartialPoint) {
	string input1 = "AAABB";
	string input2 = "BAA";
	Cal cal;
	int ret = cal.getLengthPoint(input1, input2);
	EXPECT_EQ(20, ret);
}

TEST(TestCaseName, getReturnZeroPoint) {
	string input1 = "A";
	string input2 = "BBB";
	Cal cal;
	int ret = cal.getLengthPoint(input1, input2);
	EXPECT_EQ(0, ret);
}

