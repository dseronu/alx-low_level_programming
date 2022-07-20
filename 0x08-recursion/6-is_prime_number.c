#include "main.h"

/**
 * is_prime_number - function to check prime numbers
 * @i: first integer
 * @j: second integer
 * Return: integer
 */

int check_prime(int i, int j)
{
	if (j >= i && i > 1)
	{
		return (1);
	}
	else if (i % j == 0 || i <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(i, j + 1));
	}
}		

/**
 * is_prime_number - function to check prime numbers
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
