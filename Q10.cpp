#include <iostream>

int NumberOf1(int n)
{
	int count = 0;
	while(n)
	{
		if(n & 1)
			count++;

		n = n >> 1;
	}

	return count;
}

int NumberOf1(int n)
{
	int count = 0;
	while(n)
	{
		++ count;
		n = (n - 1) & n;
	}
	return count;
}