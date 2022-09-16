#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - function
 * @void: null
 * Return: function return
 */

void print_most_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i ++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
