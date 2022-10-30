#include "main.h"

/**
 *_strchr - function
 *@s: value
 *@c: value
 *Return: value
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
/*		else
 *		{
 *			return (NULL);
 */		}
 		i++;
	}
}
