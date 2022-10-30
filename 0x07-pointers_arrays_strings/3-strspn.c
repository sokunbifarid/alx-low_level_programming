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

	while (s[i] != '\0')
	{
		i++;
		while (accept[j] != '\0')
		{
			j++;
			if (accept[j] == s[i])
			{
				break;
			}
			else if (accept[j] == NULL)
			{
				break;
			}
		}
	}
	return (i);
}
