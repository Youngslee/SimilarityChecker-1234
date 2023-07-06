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
	}

private:
	const int SAME_LENGTH_MAX_SCORE = 60;
};
