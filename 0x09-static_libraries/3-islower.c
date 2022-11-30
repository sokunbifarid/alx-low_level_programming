#include "main.h"

/**
 *_islower - function
 *@c: character
 *Return: return value
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
