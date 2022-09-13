#include <stdio.h>
/**
 * main - function
 * @void: value
 * Return: valued
 */
int main(void)
{
	int i,j,k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i != j && j != k && k != i)
				{
					putchar((char) i + '0');
					putchar((char) j + '0');
					putchar((char) k + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
