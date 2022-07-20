#include "main.h"

/**
 * _sqrt_recursion - functions that returns the natural square root
 * @n: integer
 * Return: square root
 */

int check(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	if (i * i > j)
	{
		return (-1);
	}
	return (check(i + 1, j));
}

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check(1, n));
}
