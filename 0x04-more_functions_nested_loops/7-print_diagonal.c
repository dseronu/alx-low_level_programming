#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times the charater \ should be printed
 * Return: a diagonal 
 */

void print_diagonal(int n)
{
	int a, b;
	
	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < a ; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
