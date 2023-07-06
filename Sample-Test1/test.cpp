#include "pch.h"
#include "../project15/Cal.cpp"
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

