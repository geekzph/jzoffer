long long Fibonacci(unsigned int n)
{
	if(n <= 0)
		return 0;
	if(n == 1)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2); 
}

long long Fibonacci(unsigned int n)
{
	if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    long firstItem = 0;
    long secondItem = 1;
    long fib = 0;
    unsigned int cnt = 1;
    while(cnt < n)
    {
        fib = firstItem + secondItem;
        firstItem = secondItem;
        secondItem = fib;
        ++cnt;
    }
    return fib;
}