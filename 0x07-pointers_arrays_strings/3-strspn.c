#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:
 * @accept: 
 *
 * Return: initial bytes of segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
