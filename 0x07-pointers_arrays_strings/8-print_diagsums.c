#include "main.h"

/**
 *print_diagsums
 *@a: value
 *@size: value
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < size)
	{
		j += a[i];
		a += size;
		i++;
	}

	a -= size;
	i = 0;
	while (i < size)
	{
		k += a[i];
		a -= size;
		i++;
	}

	printf("%d, %d\n", j, k);
}
