#include "pch.h"
#include "../Project15/Cal.cpp"

TEST(TestCaseName, GetReturnSameAlphas) {
	string input1 = "ASD";
	string input2 = "DSA";
	Cal cal;
	int ret = cal.getAlphaPoints(input1, input2);
	EXPECT_EQ(40, ret);
}

TEST(TestCaseName, GetReturnpartialPoint) {
	string input1 = "AA";
	string input2 = "AAE";
	Cal cal;
	int ret = cal.getAlphaPoints(input1, input2);
	EXPECT_EQ(40, ret);
}