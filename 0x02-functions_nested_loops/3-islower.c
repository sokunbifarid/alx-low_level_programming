#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - func
 * @c: value
 * @RETURN: value
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
