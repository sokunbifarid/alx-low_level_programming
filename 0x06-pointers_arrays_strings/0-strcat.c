#include "main.h"
#include <string.h>

/**
* _strcat - function
* @dest: value
* @src: value
* Return: value
*/

char *_strcat(char *dest, char *src)
{
	int j = 0, i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	if (dest[j] == '\0')
	{
		dest[j] = " ";
	}
	while (src[i] != '\0')
	{
		j++;
		dest[j] = src[i];
		i++;
	}
	return (dest);
}
