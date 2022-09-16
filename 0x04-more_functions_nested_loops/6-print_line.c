#include <stdio.h>
#include "main.h"

/**
 * print_line - function
 * @n: value
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
