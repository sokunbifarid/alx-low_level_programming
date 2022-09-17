#include <stdio.h>

/**
 * main - function
 * @void: null
 * Return: value
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');

			if (i > 8 && j > 8)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
