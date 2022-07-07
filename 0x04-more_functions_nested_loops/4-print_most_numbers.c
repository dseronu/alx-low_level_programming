#include "main.h"

/** 
 * print_most_numbers - function that prints number from 0-9
 * @i: integer
 * Return: number
 */

void print_most_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
