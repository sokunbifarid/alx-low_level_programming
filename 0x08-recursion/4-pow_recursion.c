#include "main.h"

/**
 * _pow_recursion - Function to return values
 * @x: Value
 * @y: Value
 * Return: returns Int
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
