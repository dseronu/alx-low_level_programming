#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase
 * @s: character to convert to upper
 * Return: value of uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
