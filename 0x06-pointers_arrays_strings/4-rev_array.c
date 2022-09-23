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

	int j = n - 1;

	int map[] = {0,1,2,3};

	for (; j > n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		i++;
		a[j] = i;
	}
}
