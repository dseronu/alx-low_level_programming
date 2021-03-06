#include "main.h"

/**
 * factorial - function that returns factorial of a number
 * @n: index
 * Return: factorial number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
