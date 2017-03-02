#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> fizzBuzz(int n)
{
	bool _flag3 =false, _flag5 = false, _flag3_5 = false;
	vector<string> _ans = {};
	for (size_t i = 1; i < n + 1; i++)
	{
		_flag3 = (i % 3 == 0) ? true : false;
		_flag5 = (i % 5 == 0) ? true : false;
		if (_flag3 && !_flag5)
			_ans.push_back("Fizz");
		else if (_flag5 && !_flag3)
			_ans.push_back("Buzz");
		else if (_flag3 && _flag5)
			_ans.push_back("FizzBuzz");
		else
		{
			stringstream _streamObj;
			_streamObj << i;
			_ans.push_back(_streamObj.str());
		}
	}
	return _ans;
}

int main()
{
	auto ans = fizzBuzz(15);
	int i = 0;
	for (auto &c : ans)
		cout << ++i << '\t' << c << endl;
	return 0;
}