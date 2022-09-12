#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * @void: empty value
 * Return: function value
 */

int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is less than 5 and not 0\n",n,n%10);
	}	

	return (0);

}
