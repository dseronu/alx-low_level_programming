#include "main.h"

/**
 * more_numbers - function that prints 10 time numbers
 * Return: numbers from 0 - 14
 */

void more_numbers(void)
{
	int i = 0, j;
	
	while(i < 10)
	{
		j = 0;
		while (j <=14)
		{
			_putchar(j);
			j++;
		}
	_putchar('\n');
	i++;
	}
}
