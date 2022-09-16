#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - function
 * @c: value
 * Return: function value
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
