#include <stdio.h>
#include "main.h"

/**
 * print_line - function
 * @n: value
 * Return: value
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
