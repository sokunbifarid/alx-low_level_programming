#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @void: null
 * Return: value
 */
int main(void)
{
	int i = 0;

	int j = 1;

	int d;

	int k;

	for (k = 0; k < 50; k++)
	{
		d = i + j;
		printf("%d", d);
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
