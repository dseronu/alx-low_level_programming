#include <stdarg.h>
#include "variadic_functions.h"
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - function that reutrns the sum of all parameters
 * @n: parameter
 *
 * Return: always interger
 * On error, 0 is returned
 */
int sum_them_all(const unsigned int n, ...)

{

	va_list ap;

	unsigned int i, nSum;



	if (n == 0)

		return (0);



	va_start(ap, n);



	nSum = 0;

	for (i = 0; i < n; i++)

		nSum += va_arg(ap, unsigned int);

	va_end(ap);

	return (nSum);

}
