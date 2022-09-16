#include <stdio.h>
#include "main.h"

/**
 * print_square - fucntion
 * @size: value
 */
void print_square(int size)
{
	char s = '#';

	int i;

	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(s);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
