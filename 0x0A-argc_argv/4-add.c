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
	int f1 = 0, f2 = 0, f0 = 0;

	for (f1 = 1; f1 < argc; i++)
	{
		for (f2 = 0; argv[f1][f2] != '\0'; f2++)
		{
			if (argv[f1][f2] < '0' || argv[f1][f2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		f0 += atoi(argv[f1]);
	}

	printf("%d\n", f0);

	return (0);
}
