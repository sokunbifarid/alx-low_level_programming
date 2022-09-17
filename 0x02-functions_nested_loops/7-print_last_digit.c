#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <math.h>
/**
 * print_last_digit - function
 * @b: value
 * Return: value
 */
int print_last_digit(int b)
{
	int i;

	i = b % 10;
	if (i < 0)
	{
		i = i * -1;
	}

	_putchar(i + '0');
	return (i);
/*	return NAN;*/
}
