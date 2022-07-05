#include "main.h"

/**
 * main - Main entry block
 * Description: prints _putchar followed by a new line
 * Return: Alwats 0
 */

int main(void)
{
	char c[10] = "_putchar";
	int i;

	for (i=0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
