#include "main.h"
#include <stdio.h>

/**
 *_strncat - function
 *@dest: value
 *@src: value
 *@n: value
 *Return: value
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n;)
	{
		dest[j] = src[i];
		j++;
		i++
	}
	return (dest);
}
