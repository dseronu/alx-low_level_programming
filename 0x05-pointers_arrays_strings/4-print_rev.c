#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: input char
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		s--;
		_putchar(*s);
		i++;
	}
	_putchar('\n');
}
