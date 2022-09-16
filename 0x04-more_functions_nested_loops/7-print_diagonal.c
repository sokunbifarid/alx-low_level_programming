#include <stdio.h>
#include "main.h"
/**
 * print_diagonal
 * @n: value
 */

void print_diagonal(int n)
{
	int i;
	
	int j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				_putchar(' ');
			}
		printf('\');
		}
	}
	else
	{
	_putchar('\n');
	}
}
