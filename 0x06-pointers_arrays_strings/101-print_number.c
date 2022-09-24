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
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
