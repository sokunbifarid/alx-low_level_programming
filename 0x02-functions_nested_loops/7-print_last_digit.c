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
	printf("%d%d", abs(b % 10), abs(b % 10));
	return (b % 10, b % 10);
/*	return NAN;*/
}
