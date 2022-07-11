#include "main.h"

/**
 * _strlen - function that returns the len of string
 * @s: pointer input
 * return: i
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
