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
class SameLengthFixture : public testing::Test
{
public:
	Cal cal;
	string input1;
	string input2;
	int expected;
	void getResult()
	{
		EXPECT_EQ(expected, cal.getLengthPoint(input1, input2));
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
TEST_F(SameLengthFixture, getReturnSameLengthPoint) {
	input1 = "ABC";
	input2 = "BBY";
	expected = cal.SAME_LENGTH_MAX_SCORE;
	getResult();
}

TEST_F(SameLengthFixture, getReturnPartialPoint) {
	input1 = "AAABB";
	input2 = "BAA";
	expected = 20;
	getResult();
}

TEST_F(SameLengthFixture, getReturnZeroPoint) {
	input1 = "A";
	input2 = "BBB";
	expected = cal.SAME_LENGTH_MIN_SCORE;;
	getResult();
}
