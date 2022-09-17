#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function
 * @n: value
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while(n <= 98)
		{
			printf("%d", n++);
		}
	}
	else if (n >= 99)
	{
		while(n >= 99)
		{
			printf("%d", n--);
		}
	}
}
