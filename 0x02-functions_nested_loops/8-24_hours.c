#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function
 * @void: null
 */
void jack_bauer(void)
{
	int a;

	int b;

	for (a = 22; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			if (b >= 10 && a >= 10)
			{
				printf("%d:%d", a, b);
			}
			else if (b < 10 && a >= 10)
			{
				printf("%d:0%d", a, b);
			}
			else if (b >= 10 && a < 10)
			{
				printf("0%d:%d", a, b);
			}
			else if (b < 10 && a < 10)
			{
				printf("0%d:0%d", a, b);
			}
			printf("\n");
		}
	}
}
