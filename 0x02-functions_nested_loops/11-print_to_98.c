#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function
 * @n: value
 * Return: value
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%f", n);
		if (n < 98)
		{
			_putchar(',');
		}
	}
}