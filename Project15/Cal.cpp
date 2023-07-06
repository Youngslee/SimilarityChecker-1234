#include <xstring>
using namespace std;
class Cal
{

public:
	const int SAME_LENGTH_MAX_SCORE = 60;
	const int SAME_LENGTH_MIN_SCORE = 0;
	int getLengthPoint(const string & input1, const string & input2)
	{
		len1 = input1.length();
		len2 = input2.length();
		
		return getPoints();
	}

private:
	int getPoints()
	{
		int gap = len1 - len2;
		int shortLength = len1;
		int longLength = len2;
		if (gap > 0) {
			shortLength = len2;
			longLength = len1;
		}
		if (len1 - len2 == 0) return SAME_LENGTH_MAX_SCORE;
		if (longLength >= shortLength * 2) return SAME_LENGTH_MIN_SCORE;

		double points = (1 - ((double)abs(gap) / (double)shortLength));
		return points * SAME_LENGTH_MAX_SCORE;
	}

	int len1 = 0;
	int len2 = 0;

};
