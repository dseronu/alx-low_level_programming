#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main code block
 * Return: Always 0 when successful
 */

int main(void)
{
	int n;
	/* comment */	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
