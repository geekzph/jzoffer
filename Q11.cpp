#include <iostream>

bool g_InvalidInput = false;

double PowerSum(double base, unsigned int exponent)
{
	double result = 1.0
	for (int i = 0; i < exponent; ++i)
	{
		result *= base;
	}
	return result;
}
bool equal(double a, double b)
{
	if((a - b > -0.00000001) && (a - b < 0.00000001))
		return true;
	else
		return false;
}

double Power(double base, int exponent)
{
	g_InvalidInput = false;

	if(equal(base, 0.0) && exponent < 0)
	{
		g_InvalidInput = true;
		return 0.0;
	}

	unsigned int absExponet = (unsigned int) (exponent);

	if(exponent < 0)
		absExponet = (unsigned int) (-exponent);

	double result = PowerSum(base, absExponet);

	if(exponent < 0)
		result = 1.0 / result;
	
	return result;
} 