#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: index
 * Returns: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++, n--)
	{
		s[i] = b;
	}
	for ( ; i < n; i++)
	{
		s[i] = '\0';
	}
	return (s);
}
