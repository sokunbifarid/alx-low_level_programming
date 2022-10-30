#include "main.h"

/**
 *_strchr - function
 *@s: value
 *@c: value
 *Return: value
 */

char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[1] == c)
		{
			return (s + 1);
		}
		else if (s[0] == c)
		{
			return (s);
		}
		s++;
	}
	return (s + 1);
}
