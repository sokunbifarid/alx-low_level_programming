#include <stdio.h>
#include "main.h"
/**
 * print_sign - function
 * @n: value
 * Return: value
 */
int print_sign(int n)
{
	if (n < 0)
	{
		printf('-');
		return (-1);
	}
	else if (n > 0)
	{
		printf('+');
		return (1);
	}
	else
	{
		printf('0');
		return (0);
	}
}
