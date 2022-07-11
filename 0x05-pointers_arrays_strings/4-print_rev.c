#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: input char
 * Return: string in reverse
 */

void print_rev(char *s)
{
	while (s != '\0')
	{
		printf("Print in reverse: %s\n", rev(s));
		s++
	}
}
