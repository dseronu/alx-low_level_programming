#include "main.h"

/**
 * _pow_recursion - function that returns the value of x power y
 * @x: first integer
 * @y: second integer
 * Return: value of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y));
}
