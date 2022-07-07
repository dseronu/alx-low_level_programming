#include "main.h"

/**
 * _isdigit - function that checks for digit 0-9
 * @c: integer to check
 * Return: returns 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
