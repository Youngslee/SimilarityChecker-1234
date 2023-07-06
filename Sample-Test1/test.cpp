#include "pch.h"
#include "../Project15/Cal.cpp"

TEST(TestCaseName, GetReturnSameAlphas1) {
	string input1 = "ASD";
	string input2 = "DSA";
	Cal cal;
	int ret = cal.getAlphaPoints(input1, input2);
	EXPECT_EQ(cal.MAX_ALPHA_SCORE, ret);
}
TEST(TestCaseName, GetReturnSameAlpas2) {
	string input1 = "AAABB";
	string input2 = "BA";
	Cal cal;
	int ret = cal.getAlphaPoints(input1, input2);
	EXPECT_EQ(cal.MAX_ALPHA_SCORE, ret);
}
TEST(TestCaseName, GetReturnPartialPoint1) {
	string input1 = "AA";
	string input2 = "AAE";
	Cal cal;
	int ret = cal.getAlphaPoints(input1, input2);
	EXPECT_EQ(20, ret);
}

TEST(TestCaseName, GetReturnZeroPoint) {
	string input1 = "A";
	string input2 = "BB";
	Cal cal;
	int ret = cal.getAlphaPoints(input1, input2);
	EXPECT_EQ(cal.MIN_ALPHA_SCORE, ret);
}