#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *string_toupper - function
 *@cara: value
 *Return: value
 */

char *string_toupper(char *cara)
{
	int i = 0;

	while (i >= 0)
	{
		if (cara[i] == NULL && cara[i + 1] == NULL)
		{
			break;
		}
		if (cara[i] >= 'a' && cara[i] <= 'z')
		{
			cara[i] = cara[i] - 32;
		}
		i++;
	}
	return (cara);
}
