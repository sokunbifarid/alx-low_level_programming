#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function
 * @void: null
 * Return: null
 */
void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
