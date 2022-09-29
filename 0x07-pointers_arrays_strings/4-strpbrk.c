#include "main.h"

/**
 *_strpbrk - function
 *@s: value
 *@accept: value
 *Return: value
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (accept[i] == *s)
				return (s);
			i++;
		}
		s++;
	}

	return ('\0');
}
