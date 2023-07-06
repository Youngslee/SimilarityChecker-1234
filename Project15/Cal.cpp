#include <xstring>
using namespace std;
class Cal
{
public:
	int getLengthPoint(const string & input1, const string & input2)
	{
		int gap = input1.size() - input2.size();
		if(gap == 0)
		{
			return SAME_LENGTH_MAX_SCORE;
		}

		int shortLength = input1.size();
		if (gap > 0) shortLength = input2.size();

		int result = (1 - ((double)abs(gap) / (double)shortLength)) * 60;
		return result;
	}

private:
	const int SAME_LENGTH_MAX_SCORE = 60;
};
