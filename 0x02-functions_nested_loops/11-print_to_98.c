#include <stdio.h>
#include <sdtlib.h>

/**
 * print_to_98 -prints all naturals numbers
 * Description: Functionthay prints all naturak numbers from n-98
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if ( n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");

}
