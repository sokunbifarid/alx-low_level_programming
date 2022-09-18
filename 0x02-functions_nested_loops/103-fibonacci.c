#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @void: null
 * Return: value
 */
int main(void)
{
	long i = 0;

	long j = 1;

	long d = 0;

	long k;

	for (; d <= 4000000;)
	{
		d = i + j;
		i = j;
		j = d;
		if (i % 2 == 0)
		{
			k += i;
		}
	}
	printf("%ld\n", k);
	return (0);
}
