#include <xstring>
using namespace std;
class Cal
{
public:
	const int MAX_ALPHA_SCORE = 40;
	const int MIN_ALPHA_SCORE = 0;

	int getAlphaPoints(const string& input1, const string& input2)
	{
		countInput(input1, input1_cnt);
		countInput(input2, input2_cnt);
		return getPointForSameAlpha();
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
	int input1_cnt[26] = {0,};
	int input2_cnt[26] = { 0, };
};