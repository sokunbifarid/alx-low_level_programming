#include <stdio.h>
/**
 * main - function
 * @void: argue
 * Return: result
 */
int main(void)
{
	char cot;

	for (cot = 'z'; cot >= 'a'; cot--)
	{
		putchar(cot);
	}	
	putchar('\n');
	return (0);
}
