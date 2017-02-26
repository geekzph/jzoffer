#include <iostream>

//yihcu
void Print1ToMaxOfNDigits(int n)
{
	int number = 1;
	int i = 0;
	while(i++ < n)
		number *= 10;

	for(int i = 1; i < number; ++1)
		printf("%d\t", i);
}

void Print1ToMaxOfNDigits(int n)
{
	int number = 1;
	int i = 0;
	while(i++ < n)
		number *= 10;

	for(int i = 1; i < number; ++1)
		printf("%d\t", i);
}