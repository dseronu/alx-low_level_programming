#include <stdio.h>

/**
 * main - main block
 * Description: prints the alphabet in lowercase then new line
 * Return: 0
 */

void print_alphabet(void)
{
	int lowerAlpha;

	for (lowerAlpha = 'a'; lowerAlpha <= 'z'; lowerAlpha++)
	{
		_putchar(lowerAlpha);
	}
	_putchar ('\n');
}
