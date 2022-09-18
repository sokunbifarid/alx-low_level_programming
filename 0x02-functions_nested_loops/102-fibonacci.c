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

	for (k = 0; k < 50; k++)
	{
		d = i + j;
		printf("%ln", d);
		i = j;
		j = d;
		if (k >= 49)
		{
			printf("\n");
			continue;
		}
		printf(", ");
	}
	return (0);
}
