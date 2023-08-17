#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the opcodes of its own main function.
 *              Usage: ./main number_of_bytes
 *
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always Return Success
 */

int main(int argc, char *argv[])
{
	int index, nbytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < nbytes; index++)
	{
		printf("%02x", ptr[index] & 0xFF);
		if (index != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
