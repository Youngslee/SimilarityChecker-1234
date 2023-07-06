#include "pch.h"
#include "../Project15/Cal.cpp"

class AlphaFixture : public testing::Test
{
public:
	string input1;
	string input2;
	Cal cal;
	int expected;
	void checkResult()
	{
		EXPECT_EQ(expected, \
			cal.getAlphaPoints(input1, input2));
	}
};

TEST_F(AlphaFixture, GetReturnSameAlphas1) {
	input1 = "ASD";
	input2 = "DSA";
	expected = cal.MAX_ALPHA_SCORE;
	checkResult();
}
TEST_F(AlphaFixture, GetReturnSameAlpas2) {
	input1 = "AAABB";
	input2 = "BA";
	expected = cal.MAX_ALPHA_SCORE;
	checkResult();
}
TEST_F(AlphaFixture, GetReturnPartialPoint1) {
	input1 = "AA";
	input2 = "AAE";
	expected = 20;
	checkResult();
}

TEST_F(AlphaFixture, GetReturnZeroPoint) {
	input1 = "A";
	input2 = "BB";
	expected = cal.MIN_ALPHA_SCORE;
	checkResult();
}