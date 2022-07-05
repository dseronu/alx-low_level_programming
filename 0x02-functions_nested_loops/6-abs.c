#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry block
 * Description: Function that compute the absolute value intager
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return(n);
	}
	else if (n < 0)
	{
		return(-n);
	}
	else
	{
		return (0);
	}
}
