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

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n -= 1;
	}
	return (s);
}
