#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n: value
 * Return: return value of the function
 */

int factorial(int n)
{
	int i = 0;

	if (n > 0)
	{
		i = factorial(n - 1);
		return (n * i);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
