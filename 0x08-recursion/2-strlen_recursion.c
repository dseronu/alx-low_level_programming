#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string pointer
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s > '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
