#include <stdio.h>
/**
 * main - function
 * @void - empty
 * Return: value
 */
int main(void)
{
	int cup;

	for (cup = 0; cup <= 9; cup++)
	{
		putchar((char) cup + '0');
	}
	putchar('\n');
	return (0);

}
