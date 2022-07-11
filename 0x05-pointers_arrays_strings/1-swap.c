#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: first number
 * @b: second number
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
