#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function
 * @n: value
 */
void print_times_table(int n)
{
	int i, j, d;

	if (n < 15 && n > 0 && n != 100)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				d = i * j;
				if (j > 0 && d < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
				}
				else if (j == 0)
				{
					_putchar(d + '0');
				}
				else if (d >= 10 && d < 100)
				{
					_putchar(' ');
					_putchar(d / 10 + '0');
					_putchar(d % 10 + '0');
				}
				else if (d >= 100)
				{
					_putchar(d / 100 + '0');
					_putchar((d / 10) % 10 + '0');
					_putchar(d / 10 + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0 || n >= 15)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
}
