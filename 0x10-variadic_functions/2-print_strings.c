#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 *
 * @separator: String to be printed between the strings (if not NULL)
 * @n: Number of strings passed to the function
 * @...: Variable number of arguments representing strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list tap;
	unsigned int storm;
	char *str;

	va_start(tap, n);

	for (storm = 0; storm < n; storm++)
	{
		str = va_arg(tap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && storm != n - 1)
			printf("%s", separator);
	}
	va_end(tap);
	printf("\n");
}
