#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> findWords(vector<string>& words)
{
	vector<string> _keyBoard = {
		"qwertyuiop",
		"ASDFGHJKLasdfghjkl",
		"ZXCVBNMzxcvbnm"
	};
	vector<string> _ans;
	string tmpStr;
	int mark = -1;
	
	for (size_t i = 0; i < words.size(); i++)
	{
		bool _endFlag = false;
		if (_keyBoard[0].find(words[i][0])!=string::npos)
		{
			mark = 0;
		}
		else if (_keyBoard[1].find(words[i][0])!=string::npos)
		{
			mark = 1;
		}
		else if (_keyBoard[2].find(words[i][0])!=string::npos)
		{
			mark = 2;
		}
		else
		{
			continue;
		}
		if (mark != -1)
		{
			for (size_t j = 1; j < words[i].size(); j++)
			{
				if (_keyBoard[mark].find(words[i][j]) != string::npos)
				{
					continue;
				}
				else
				{
					_endFlag = true;
					break;
				}
			}
			if (!_endFlag)
				_ans.push_back(words[i]);
		}
		
	}
	return _ans;
}

int main()
{
	vector<string> input = {
		"Aasdfghjkl",
		"Qwertyuiop",
		"zZxcvbnm"
	};
	auto ans = findWords(input);
	return 0;
}