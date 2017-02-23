#include <iostream>
#include <vector>

bool Find(int* martix, int rews, int columns, int number)
{
	bool find = flase;

	if(martix != NULL && rows > 0 && columns > 0)
	{
		int row = 0;
		int columns = columns - 1;
		while(row < rows && column >= 0)
		{
			if(martix[row * columns + column] == number)
			{
				found = true;
				break;
			}
			else if(martix[row * columns + column] > number)
				-- column;
			else
				++ row;
		}
	}

	return found;
}