#include <xstring>
using namespace std;
class Cal
{
public:
	const int MAX_ALPHA_SCORE = 40;
	const int MIN_ALPHA_SCORE = 0;
	const int SAME_LENGTH_MAX_SCORE = 60;
	const int SAME_LENGTH_MIN_SCORE = 0;
	int getAlphaPoints(const string& input1, const string& input2)
	{
		countInput(input1, input1_cnt);
		countInput(input2, input2_cnt);
		return getPointForSameAlpha();
	}
	int getLengthPoint(const string& input1, const string& input2)
	{
		input1_len = input1.length();
		input2_len = input2.length();

		return getPoints();
	}
private :
	void countInput(const string& input, int *input_cnt)
	{
		for (auto& alpha : input)
		{
			input_cnt[alpha - 'A']++;
		}
	}
	int getPointForSameAlpha()
	{
		int sameCnt = 0;
		int totalCnt = 0;
		for (int i = 0; i < 26; i++)
		{
			if (input1_cnt[i] == 0 && input2_cnt[i] == 0) continue;
			if (input1_cnt[i] > 0 && input2_cnt[i] > 0) sameCnt++;
			totalCnt++;
		}
		if (totalCnt == 0) return MIN_ALPHA_SCORE;
		if (totalCnt == sameCnt) return MAX_ALPHA_SCORE;
		return (sameCnt / (double)totalCnt) * MAX_ALPHA_SCORE;
	}
	int getPoints()
	{
		int gap = input1_len - input2_len;
		int shortLength = input1_len;
		int longLength = input2_len;
		if (gap > 0) {
			shortLength = input2_len;
			longLength = input1_len;
		}
		if (input1_len - input2_len == 0) return SAME_LENGTH_MAX_SCORE;
		if (longLength >= shortLength * 2) return SAME_LENGTH_MIN_SCORE;

		double points = (1 - ((double)abs(gap) / (double)shortLength));
		return points * SAME_LENGTH_MAX_SCORE;
	}

	int input1_len = 0;
	int input2_len = 0;
	int input1_cnt[26] = {0,};
	int input2_cnt[26] = { 0, };
};
