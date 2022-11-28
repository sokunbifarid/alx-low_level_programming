#include "main.h"

/**
 * is_prime_number - function to return prime numbers
 * @n: value
 * Return: Value
 */

int is_prime_number(int n)
{
	int f = n / 2;

	if (n > 1)
	{
		return (check_prime(n, f));
	}
	else
	{
		return (0);
	}
}

/**
 * check_prime - the function checks prime
 * @i: value
 * @j: value
 * Return: Value
 */

int check_prime(int i, int j)
{
	if (j <= 1)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (check_prime(i, j - 1));
}
