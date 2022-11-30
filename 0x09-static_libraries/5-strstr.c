#include "main.h"

/**
 * _strstr - function
 * @haystack: character
 * @needle: character
 * Return: return value
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		else
		{
			haystack++;
		}
	}
	return ('\0');
}
