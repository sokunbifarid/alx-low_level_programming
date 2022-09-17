#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - function
 * @n: value
 * Return: value
 */
void print_to_98(int n)
{
	int i;
	i = n;
	while (i <= 98)
	{
		if (i < 0 && i > -10)
		{
			_putchar('-');
			_putchar(abs(i) + '0');
		}
		else if (i <= -10 && i > -100)
		{
			_putchar('-');
			_putchar(abs(i) / 10 + '0');
			_putchar(abs(i) % 10 + '0');
		}
		else if (i <= -100)
		{
			_putchar('-');
			_putchar(abs(i) / 100 + '0');
			_putchar(abs(i) / 10 + '0');
			_putchar(abs(i) % 10 + '0');
		}
		else if (i >= 0 && i < 10)
		{
			_putchar(i + '0');
		}
		else if (i >= 10)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
