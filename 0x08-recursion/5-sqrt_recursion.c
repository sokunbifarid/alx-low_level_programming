#include "main.h"

/**
 *_sqrt_recursion - square root function
 *@n: value
 * Return: Value
 */

int _sqrt_recursion(int n)
{
	if (n >= 0 || n < 2)
	{
		return (-1);
	}
	else
	{
		return (root(0, n));		
	}
}


/**
 *root - square root function
 *@a: value
 *@n: value
 * Return: Value
 */

int root(int a, int n)
{
	if (a > n / 2)
	{
		return (-1);
	}
	else if (a * a == n)
	{
		return (a);
	}
	return (root(a + 1, n));
}
