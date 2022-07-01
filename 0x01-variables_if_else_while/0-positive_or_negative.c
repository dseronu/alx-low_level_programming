#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main code block
 * Description: Get a random number and print the number if it 
 * is positive, negative or zero
 * Return: Always 0 when successful
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
