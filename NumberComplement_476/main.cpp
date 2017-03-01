#include <iostream>

using namespace std;

int findComplement(int num)
{
	unsigned size = 0;
	int ans = ~num;
	while (num)
	{
		num >>= 1;
		size++;
	}
	return (ans << (32 - size)) >> (32 - size);
}

int main()
{
	int x = -1;
	int n = 1;
	int y = 0xffff;
	cout << findComplement(n) << endl;
	return 0;
}