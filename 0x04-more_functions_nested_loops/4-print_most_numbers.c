#include "main.h"

/** 
 * print_most_numbers - function that prints number from 0-9
 * @i: integer
 * Return: number
 */

void print_most_numbers(void)
{
	int numb;
	
	for (numb = 48 ; numb <= 57 ; numb++)
	{
		if (numb != 50 && numb != 52)
		{
			_putchar(numb);
		}
	}
	_putchar('\n');
}
