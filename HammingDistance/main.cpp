#include <iostream>

int hammingDistance(int x, int y)
{
	auto ans = x ^ y;
	int ret = 0;
	while (ans != 0)
	{
		if (ans % 2 != 0)
		{
			ret++;
		}
		ans = ans >> 1;
	}
	return ret;
}

int main()
{
	int x = 1, y = 4;
	auto ans = hammingDistance(x, y);
	std::cout << ans << std::endl;
	return 0;
}