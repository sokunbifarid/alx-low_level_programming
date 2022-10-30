#include "main.h"

/**
 *_strspn - function
 *@s: value
 *@accept: value
 *Return: value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (accept[i] == *s)
			{
				j++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
			{
				return (j);
			}
			i++;
		}
		s++;
	}
	return (j);
}
