#include "student_code.h"

int factorial(int n)
{
	int result = 0;
	
	if (0 == n || 1 == n)
	{
		result = 1;
	}
	else
	{
		result = n;
		
		for (int i = n - 1; i > 0; i--)
		{
			result = result * i; 
		}
	}

	return result;
}

int power(int n, int p)
{
	return 0;
}
bool isPrime(int n)
{
	return 0;
}

int nthFibonacciTerm (int n)
{
	return 0;
}

bool isMultiple(int n, int m)
{
	return 0;
}

int seriesSum(int n)
{
	return 0;
}
