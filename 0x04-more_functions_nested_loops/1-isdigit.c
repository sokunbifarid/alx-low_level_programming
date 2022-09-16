#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function
 * @c: value
 * Return: function calue
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
