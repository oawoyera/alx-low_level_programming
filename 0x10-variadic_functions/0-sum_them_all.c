#include "variadic_functions.h"
/**
 * sum_them_all - find the sum of all parameters passed
 * @n: argument count
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);

	return (sum);
}
