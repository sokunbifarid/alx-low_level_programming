#include <stdio.h>
/**
 * main - func
 * @void: null
 * Return: value
 */
int main(void)
{
	int i;

	char cot;

	for (i = 0; i < 10; i++)
	{
		for (cot = 'a'; cot <= 'z'; cot++)
		{
			putchar(cot);
		}
	}
	return (0);
}
