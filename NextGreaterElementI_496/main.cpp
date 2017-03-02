#include <iostream>
#include <vector>

using namespace std;

vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums)
{
	vector<int> _ans = {};
	for (size_t i = 0; i < findNums.size(); i++)
	{
		bool _flag = false;
		auto _pos = -1;
		for (size_t j = 0; j < nums.size(); j++)
		{
			if (nums[j] == findNums[i])
			{
				_pos = j;
				continue;
			}
			if (_pos != -1 && nums[_pos] < nums[j])
			{
				_flag = true;
				_pos = j;
				break;
			}
		}
		if (_flag)
			_ans.push_back(nums[_pos]);
		else
			_ans.push_back(-1);
	}	
	return _ans;
}

int main()
{
	vector<int> nums1 = { 1,3,5,2,4 };
	vector<int> nums2 = { 6,5,4,3,2,1,7 };
	auto f = nextGreaterElement(nums1, nums2);
	for (auto &i : f)
		cout << i << endl;
	return 0;
}