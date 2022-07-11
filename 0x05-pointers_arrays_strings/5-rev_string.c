#include "main.h"

/**
 * rev_string - function that reverse string
 * @s: string input
 * Return: string in reverse
 */

void rev_string(char *s)
{
	for (s = 0; s != '\0'; s--)
	{
		_putchar(s);
	}
	_putchar('\n');
}
