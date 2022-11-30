#include "main.h"

/**
 * _strdup - function
 * @str: character
 * Return: return value
 */

char *_strdup(char *str)
{
	char *a;
	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		j++;
	}
	a = malloc(sizeof(char) * (j + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		a[i] = str[i];
	}
	a[j] = '\0';
	return (a);

}
