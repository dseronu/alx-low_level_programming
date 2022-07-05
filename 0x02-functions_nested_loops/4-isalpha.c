#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry block
 * Descritpion: Function that checks for alphabetic character
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (c>= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
