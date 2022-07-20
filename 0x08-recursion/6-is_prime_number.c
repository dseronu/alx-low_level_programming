#include "main.h"

/**
 * is_prime_number - function to check prime numbers
 * @i: first integer
 * @j: second integer
 * Return: integer
 */

int check_num(int i, int j)
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
		return (check_num(i + 1; j));
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
	return (check_num(2, n));
}
