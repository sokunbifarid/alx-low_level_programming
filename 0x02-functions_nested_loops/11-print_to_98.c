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
		while (n <= 98)
		{
			printf("%d", n++);
			if (n != 99)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n >= 99)
	{
		while (n >= 98)
		{
			printf("%d", n--);
			if (n != 97)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
