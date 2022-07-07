#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times the charater \ should be printed
 * Return: a diagonal 
 */

void print_diagonal(int n)
{
	int i;
	int j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
