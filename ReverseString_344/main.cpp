#include <iostream>
#include <string>
#include <stack>

using namespace std;

string reverseString(string s)
{
	string _ans;
	stack<char> _tmp;
	for (auto &c : s)
		_tmp.push(c);
	while (_tmp.size())
	{
		_ans.push_back(_tmp.top());
		_tmp.pop();
	}
	return _ans;
}

int main()
{
	string s = "hello";
	auto f = reverseString(s);
	cout << f << endl;
	return 0;
}