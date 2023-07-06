#include "pch.h"
#include "../project15/Cal.cpp"
TEST(TestCaseName, getReturnSameLengthPoint) {
	Cal cal;
	string input1 = "ABC";
	string input2 = "BBY";
	EXPECT_EQ(60, cal.getLengthPoint(input1, input2));
}

TEST(TestCaseName, getReturnPartialPoint) {
	Cal cal;
	string input1 = "AAABB";
	string input2 = "BAA";
	EXPECT_EQ(20, cal.getLengthPoint(input1, input2));
}

TEST(TestCaseName, getReturnZeroPoint) {
	Cal cal;
	string input1 = "A";
	string input2 = "BBB";
	EXPECT_EQ(0, cal.getLengthPoint(input1, input2));
}

