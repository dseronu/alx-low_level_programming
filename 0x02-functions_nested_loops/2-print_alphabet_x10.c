#include "main.h"

/**
 * print_alphabet_x10 - Entry block
 * Descritption: prints 10 times the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char c;

	while (counter < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		counter++;
	}

}
