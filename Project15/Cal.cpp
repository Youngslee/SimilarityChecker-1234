#include <xstring>
using namespace std;
class Cal
{
public:
	int getLengthPoint(const string & input1, const string & input2)
	{
		if(input1.size() - input2.size() == 0)
		{
			return SAME_LENGTH_MAX_SCORE;
		}
		return getPoints(input1, input2);
	}

private:
	int getPoints(const string& input1, const string& input2)
	{
		int gap = input1.size() - input2.size();
		int shortLength = input1.size();
		if (gap > 0) shortLength = input2.size();

		double points = (1 - ((double)abs(gap) / (double)shortLength));

		if (points <= 0) return 0;

		return points * SAME_LENGTH_MAX_SCORE;
	}
	const int SAME_LENGTH_MAX_SCORE = 60;
};
