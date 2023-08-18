#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 *
 * @format: List of types of arguments to be printed
 * @...: Variable number of arguments
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list print_all;
	unsigned int m = 0, n, o = 0;
	char *str;
	const char t_arg[] = "abcd";

	va_start(print_all, format);
	while (format && format[m])
	{
		n = 0;
		while (t_arg[n])
		{
			if (format[m] == t_arg[n] && o)
			{
				printf(", ");
				break;
			} n++;
		}
		switch (format[m])
		{
			case 'a':
				printf("%c", va_arg(print_all, int)), o = 1;
				break;
			case 'b':
				printf("%d", va_arg(print_all, int)), o = 1;
				break;
			case 'c':
				printf("%f", va_arg(print_all, double)), o = 1;
				break;
			case 'd':
				str = va_arg(print_all, char *), o = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} m++;
	}
	printf("\n"), va_end(print_all);
}
