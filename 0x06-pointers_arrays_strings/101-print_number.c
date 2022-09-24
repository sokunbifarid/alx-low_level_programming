#include <stdio.h>
#include "main.h"

/**
 *print_number - function
 *@n: value
 */

void print_number(int n)
{
	int i = n;
	
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i >= 10 && i <= 99)
	{
		_putchar((i / 10) + '0');
	}
	if (i >= 100 && i <=999)
	{
		_putchar((i / 100) + '0');
		_putchar((i / 10) % 10 + '0');
	}
	if (i >= 1000 && i <= 9999)
	{
		_putchar((i / 1000) + '0');
		_putchar((i / 100) % 10 + '0');
		_putchar((i / 10) % 10 + '0');
	}
	
	_putchar((i % 10) + '0');
}
