#include "main.h"

/**
 *_memset - function
 *@s: value
 *@b: value
 *@n: value
 *Return: value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		s[n - 1] = b;
	}
	return (s);
}
