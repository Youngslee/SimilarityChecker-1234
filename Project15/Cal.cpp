#include <xstring>
using namespace std;
class Cal
{
public:
	

	int getAlphaPoints(const string& input1, const string& input2)
	{

		countAlpha(input1);
		countAlpha(input2);

		return getPointForSameAlpha();

		
	}
private :
	void countAlpha(const string& input)
	{
		for (auto& alpha : input)
		{
			alpha_cnt[alpha - 'a']++;
		}
	}
	int getPointForSameAlpha()
	{
		int sameCnt = 0;
		int totalCnt = 0;
		for (int i = 0; i < 26; i++)
		{
			if (alpha_cnt[i] >= 1)
			{
				if (alpha_cnt[i] == 2) sameCnt++;
				totalCnt++;

			}
		}
		if (totalCnt == sameCnt) return MAX_ALPHA_SCORE;
		return (sameCnt / (double)totalCnt) * MAX_ALPHA_SCORE;
	}
	const int MAX_ALPHA_SCORE = 40;
	int alpha_cnt[26] = {0,};

};