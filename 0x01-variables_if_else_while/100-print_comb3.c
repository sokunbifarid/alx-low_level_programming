#include <stdio.h>
/**
 * main - cap
 * @void: ne
 * Return: result
 */
int main(void)
{
	int i,j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			putchar((char) i + '0');
			putchar((char) j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
