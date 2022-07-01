#include <stdio.h>

/**
 * main - Main entry block
 * Description: print uppercase and lowercae alphabets
 * Return: Always o when successful
 */

int main(void)
{
	char c="a";
	char C="A";
	
	while(c <= 'z')
	{
		putchar(c);
		c++
	}
	while(C <= 'Z')
	{
		putchar(C);
		C++
	}
	putchar('\n');
	return (0);
}
