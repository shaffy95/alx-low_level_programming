#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
		printf("%s\n", argv[m]);
	return (0);
}
