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
	_putchar((char) (abs(b) % 10));
	return (abs((int) b) % 10);
}
