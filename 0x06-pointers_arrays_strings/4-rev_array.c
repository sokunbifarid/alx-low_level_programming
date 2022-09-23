#include "main.h"
#include <stdio.h>
/**
 *reverse_array - function
 *@a: value
 *@n: value
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	int j;

	int map[] = {0,1,2,3};

	for (j = n - 1; j > 0; j--)
	{
		a[j] = map[i];
		i++;
	}
	a = map;
}
