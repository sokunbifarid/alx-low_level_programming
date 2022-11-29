#include <stdio.h>
#include <stdlib.h>

/**
* main - autoloaded function
* @argc: argument 1
* @argv: argument 2
* Return: return value
*/

int main(int argc, char *argv[])
{
	int change = 0, whole = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change > 0)
	{
		whole++;
		if ((change - 25) >= 0)
		{
			change -= 25;
			continue;
		}
		if ((change - 10) >= 0)
		{
			change -= 10;
			continue;
		}
		if ((change - 5) >= 0)
		{
			change -= 5;
			continue;
		}
		if ((change - 2) >= 0)
		{
			change -= 2;
			continue;
		}
		change--;
	}
	printf("%d\n", whole);
	return (0);
}

