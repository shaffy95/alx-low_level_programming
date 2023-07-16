#include <stdio.h>
/**
* main - determine if a number is positive, negative or zero.
* Return: Always 0 (success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if
			(c != 'e' && c != 'q') {
				putchar(c);
			}
		c++;
	}
	putchar('\n');
	return (0);
}
