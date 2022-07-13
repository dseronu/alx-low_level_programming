#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of int
 * @a: int parament pointer
 * @n: integer
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int m;
	int p;
	int t;

	m = 0;
	p = n - 1;

	while (m < p)
	{
		t = a[m];
		a[m] = a[p];
		a[p] = t;
		m++;
		p--;
	}
}
