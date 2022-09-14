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
		printf("-1");
	}
	else if (n > 0)
	{
		printf("+1");
	}
	else
	{
		printf("00");
	}
	return;
}
