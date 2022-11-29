#include "main.h"

/**
* _memset - function with three arguments
* @s: character
* @b: character
* @n: integer
* Return: return value
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
