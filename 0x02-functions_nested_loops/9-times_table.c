#include <stdio.h>
#include "main.h"

/**
 * times_table - function
 * @void: null
 */
void times_table(void)
{
	int i, j, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			d = i * j;
			if (d < 10)
			{
				if (j > 1)
				{
					_putchar(' ');
				}
				_putchar( d + '0');
			}
			else
			{
				_putchar( d / 10 + '0');
				_putchar( d % 10 + '0');
			}
			if (j > 8)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');

		}
		_putchar('\n');
	}
}
