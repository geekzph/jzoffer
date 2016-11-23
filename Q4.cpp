#include <iostream>

void ReplaceBlank(char string[], int length)
{
	if (string == NULL || length <= 0)			
	{
		return;
	}

	int originLength = 0;
	int numberOfBlank = 0;
	int i = 0;
	while(string[i] != '\0')
	{
		++originLength;
		if(string[i] == ' ')
			++numberOfBlank;
		++i;
	}

	int newLength = originLength + numberOfBlank * 2;

	int indexOfOriginal = originLength;
	int indexOfNew = newLength;
	while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
	{
		if(string[indexOfOriginal] == ' ')
		{
			string[indexOfNew --] = '0';
			string[indexOfNew --] = '2';
			string[indexOfNew --] = '%';
		}
		else
			string[indexOfNew --] = string[indexOfOriginal];
		--indexOfOriginal;
	}
}

int main()
{
	return 0;
}