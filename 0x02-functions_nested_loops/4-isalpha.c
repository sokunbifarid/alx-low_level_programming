#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function
 * @c: value
 * Return: value
 */
int _isalpha(int c)
{
	if (islower(c) || isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
