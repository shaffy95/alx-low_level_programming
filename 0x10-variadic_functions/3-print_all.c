#include "variadic_functions.h"

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
	va_list playlist;
	unsigned int m = 0, n, o = 0;
	char *str;
	const char t_arg[] = "abcd";

	va_start(playlist, format);
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
				printf("%c", va_arg(playlist, int)), o = 1;
				break;
			case 'b':
				printf("%d", va_arg(playlist, int)), o = 1;
				break;
			case 'c':
				printf("%f", va_arg(playlist, double)), o = 1;
				break;
			case 'd':
				str = va_arg(playlist, char *), o = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} m++;
	}
	printf("\n"), va_end(playlist);
}
