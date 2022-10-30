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
		if (s[1] == c)
		{
			return (s + i);
		}
		else if (s[0] == c)
		{
			return (s);
		}
 		s++;
	}
}
