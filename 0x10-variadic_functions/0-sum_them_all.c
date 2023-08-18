#include <stdarg.h>

/**
 * sum_them_all - Calculates the Sum of Input Values.
 *
 * @n: Number of Input Variables
 *
 * Return: The Calculated Sum of the Variables
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list pi;
	unsigned int pet, sum = 0;

	va_start(pi, n);

	for (pet = 0; pet < n; pet++)
		sum += va_arg(pi, int);
	va_end(pi);

	return (sum);
}
