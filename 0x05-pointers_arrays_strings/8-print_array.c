#include <stdio.h>

/**
 * print_array - function that prints elements of an array of integers
 * @a: integer one
 * @n: integer two
 * Return: array of integers
 */

void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

		printf("\n");
}
