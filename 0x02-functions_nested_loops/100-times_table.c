#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function
 * @n - value
 */
void print_times_table(int n)
{
	int i, j, d;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			d = i * j;
			if (i > 0 && d < 10)
			{
				_putchar(' ');
				_putchar(d + '0');
			}
			else if (d >= 10)
			{
				_putchar(d + '0');
			}
			if (i == n)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
