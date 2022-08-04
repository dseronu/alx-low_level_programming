#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that reutrns the sum of all parameters
 * @n: parameter
 *
 * Return: always interger
 * On error, 0 is returned
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	if (n != 0)
		for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
			
			;
	va_end(list);
	return (sum);
}
