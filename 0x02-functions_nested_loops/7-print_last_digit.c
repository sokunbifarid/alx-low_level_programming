#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - function
 * @b: value
 * Return: value
 */
int print_last_digit(int b)
{
	_putchar(b % 10);
	_putchar(b % 10);
	printf("%d%d", b % 10, b % 10);
	return (b % 10);
}
