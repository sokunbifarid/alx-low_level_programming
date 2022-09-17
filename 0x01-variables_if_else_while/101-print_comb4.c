#include <stdio.h>
/**
 * main - function
 * @void: value
 * Return: valued
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = i + 2; k <= 9; k++)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(k % 10 + '0');

				if (i > 6 && i < 8 && j > 7 && k > 8)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
