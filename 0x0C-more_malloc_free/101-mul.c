#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The input string
 *
 * Returns: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(const char *str)
{
	if (str == NULL || *str == '\0')
		return 0;

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Returns: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	unsigned long num1, num2;

	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return 98;
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	printf("%lu\n", num1 * num2);

	return 0;
}
