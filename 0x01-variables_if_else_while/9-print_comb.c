#include <stdio.h>
/**
 * main - function
 * @void: param
 * Return: value
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((char) i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
