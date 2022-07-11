#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that returns the len of string
 * @*s: string
 * return: always 0
 */

int _strlen(char *s)
{
	int len;

	*s[6]="Hello";
	len=strlen(*s);
	return (0);
}
