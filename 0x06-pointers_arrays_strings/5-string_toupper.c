#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase to uppercase
 * @s: pointer to char parameters
 * Return: char 
 */

char *string_toupper(char *s)
{

	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
