#include "main.h"

/**
 * _puts - function that prints a string, followed by a \n
 * @str: input char
 * Return: string and new line
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
