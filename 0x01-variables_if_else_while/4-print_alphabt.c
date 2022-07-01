#include <stdio.h>

/**
 * main - main block
 * Description: Print alphabets in lowercase except e and q
 * Return: Always 0 when successful
 */

int main(void)
{
	char lowerAlphabet;

	for (lowerAlphabet = 'a'; lowerAlphabet <= 'z'; lowerAlphabet++)
	{
		if (lowerAlphabet != 'q' && lowerAlphabet != 'e')
		{
			putchar(lowerAlphabet);
		}
	}
	putchar('\n');
	return (0);
}
