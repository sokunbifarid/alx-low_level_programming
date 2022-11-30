#include "main.h"
#include <stddef.h> 
/**
 *_strchr - function
 *@s: character
 *@c:character
 *Return: return value
 */

char *_strchr(char *s, char c)
{
	int m = 0;

	for (m = 0; (s[m] != c) && (s[m] != '\0'); m++)
		if (s[m] == c)
			return (s + m);
		else
			return (NULL);
}
