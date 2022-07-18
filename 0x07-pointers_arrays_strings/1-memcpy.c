#include "main.h"

/**
 * _memcpy - copies memery area
 * @dest: copy destination area
 * @src: copy source memory
 * @n: index
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; n++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
