#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - determine if a number is positive, negative or zero.
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	if (n != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
