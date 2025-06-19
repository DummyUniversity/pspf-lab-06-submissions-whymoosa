#include "autograder_c.h"
#include "student_code.h"
#include <stdio.h>
#include <string.h>

int autograde(char* str)
{
	int status = 1;
	
	if (0 == strcmp(str, "Test 0001")) //Test factorial
	{
		for (int i = 0; i < 11; i++)
		{
			if (testFactorial(i) == factorial(i))
			{
				status = 0;
			}
			else
			{
				status = 1;
				printf ("%s failed at %d\n", str, i);
				break;
			}
		}

		if (0 == status)
		{
			printf("%s passed\n", str);
		}
	}


	

	return status;
}

int testFactorial(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * testFactorial(n - 1);
	}
}

int testPower(int n, int p)
{
	return 0;
}

bool testIsPrime(int n)
{
	return true;
}

int testNthFibonacciTerm (int n)
{
	return 0;
}

bool testIsMultiple(int n, int m)
{
	return true;
}

int testSeriesSum(int n)
{
	return 0;
}
