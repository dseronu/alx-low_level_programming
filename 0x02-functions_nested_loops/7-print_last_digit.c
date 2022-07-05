#include <stdio.h>

/**
 * main - Entry block
 * Description: Prints the last digit of a number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	_putchar('\n');
	return(last);
}
