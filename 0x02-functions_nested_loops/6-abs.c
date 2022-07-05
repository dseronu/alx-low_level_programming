#include "main.h"

/**
 * _abs - compute absolute value
 * @n: integer
 * Description: Function that compute the absolute value intager
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
