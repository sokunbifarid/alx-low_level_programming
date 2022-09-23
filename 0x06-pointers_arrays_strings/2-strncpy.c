#include "main.h"
#include <stdio.h>

/**
 *_strncpy - function
 *@dest: value
 *@src: value
 *@n: value
 *Return: value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	for (; i < n; i++)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
