#include "main.h"

/**
 * is_prime_number - function to check prime numbers
 * @i: first integer
 * @j: second integer
 * Return: integer
 */

int check_prime(int i, int j)
{
	if (j < 2 || j % i == 0)
	{
		return (0);
	}
	else if ((i > j) / 2)
	{
		return (1);
	}
	else
	{
		return (check_prime(j, i + 1));
	}
}

/**
 * is_prime_number - function to check prime numbers
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}	
	return (check_prime(n, 2));
}
