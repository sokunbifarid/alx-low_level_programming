#include <stdio.h>
#include "main.h"

/**
 *string_toupper - function
 *@cara: value
 *Return: value
 */

char *string_toupper(char *cara)
{
	int i = 0;

	while(cara[i] != '\0')
	{
		if (cara[i] >= 'a' && cara[i] <= 'z')
		{
			cara[i] -= 32;
		}
		i++;
	}
	return (cara);
}
