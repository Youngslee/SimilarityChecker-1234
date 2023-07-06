#include <xstring>
using namespace std;
class Cal
{
public:
	int getPartialPoints(const string& input1, const string& input2)
	{
		int gap = input1.size() - input2.size();
		int shortLength = input1.size();
		if (gap > 0) shortLength = input2.size();

		return (1 - ((double)abs(gap) / (double)shortLength)) * SAME_LENGTH_MAX_SCORE;
	}

	int getLengthPoint(const string & input1, const string & input2)
	{
		if(input1.size() - input2.size() == 0)
		{
			return SAME_LENGTH_MAX_SCORE;
		}
		return getPartialPoints(input1, input2);
	}

private:
	const int SAME_LENGTH_MAX_SCORE = 60;
};
