#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 *
 * @separator: String to be printed between numbers (if not NULL)
 * @n: Number of integers passed to the function
 * @...: Variable number of arguments representing integers
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list tap;
	unsigned int storm;

	va_start(tap, n);

	for (storm = 0; storm < n; storm++)
	{
		printf("%d", va_arg(tap, int));
		if (separator && storm != n - 1)
			printf("%s", separator);
	}
	va_end(tap);
	printf("\n");
}
