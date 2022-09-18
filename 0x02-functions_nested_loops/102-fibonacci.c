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

	for (i = 0; i < 50; i++)
	{
		d = i + j;
		printf("%d",d);
		i = j;
		j = d;
		if (i >= 49)
		{
			printf("\n");
			continue;
		}
		printf(", ");
	}
}
