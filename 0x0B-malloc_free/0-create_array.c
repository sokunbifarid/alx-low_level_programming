#include "main.h"

/**
* create_array - function
* @size: character
* @c: character
* Return: return value
*/

char *create_array(unsigned int size, char c)
{
	char *holder;
	unsigned int i;

	if (size == 0)
		return (NULL);
	holder = malloc(sizeof(char) * size);

	if (holder == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		holder[i] = c;

	return (holder);
}
