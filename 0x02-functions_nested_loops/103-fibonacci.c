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

	int k;

	for (; d <= 4000000;)
	{
		d = i + j;
		i = j;
		j = d;
		if (i % 2 == 0)
		{
			printf("%ld", d);
		}
	}
	printf("\n");
	return (0);
}
