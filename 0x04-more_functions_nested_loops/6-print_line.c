#include <stdio.h>
#include "main.h"

/*
 * print_line - function
 * @n: value
 * Return: value
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
	else
	{
		_putchar('\n');
	}
}
