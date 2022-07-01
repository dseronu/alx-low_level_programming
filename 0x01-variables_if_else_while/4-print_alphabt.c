#include <stdio.h>

/**
 * main - main block
 * Description: Print alphabets in lowercase except e and q
 * Return: Always 0 when successful
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}	
		c++;
	}
	putchar('\n');
	return (0);

}
