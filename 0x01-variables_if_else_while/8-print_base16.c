#include <stdio.h>

/**
 *  main - main block
 *  Description: prints all numbers of base 16 in lowercase.
 *  Return: 0
 */

int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
