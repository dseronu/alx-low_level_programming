#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: byte of the memory
 * Returns: returns pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s)
}
