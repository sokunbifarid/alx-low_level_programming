#include "main.h"

/**
 *_strspn - function
 *@s: value
 *@accept: value
 *Return: value
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*s)
	{
		while (accept[j])
		{
			if (accept[j] == *s)
			{
				i++;
				break;
			}
			else if ((accept[j + 1]) == '\0')
			{
				return (i);
			}
			j++;
		}
		s++;
	}
	return (i);
}
