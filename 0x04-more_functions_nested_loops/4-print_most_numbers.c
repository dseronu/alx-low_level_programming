#include "main.h"

/** 
 * print_most_numbers - function that prints number from 0-9
 * @i: integer
 * Return: number
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + a);
		}
	}
	_putchar('\n');
}
