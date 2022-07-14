#include "main.h"

/** 
 * leet - function that encodes a string into 1337
 * @s: the char pointer parameter
 * Return: char 
 */

char *leet(char *c)
{
	char *cp = c;
	char k[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(k) / sizeof(char); i++)
	{
		if (*c == k[i] || *c == k[i] + 32)
	{
		*c = 48 + v[i];
	}
	}
		c++;
	}
	return (cp);
}
