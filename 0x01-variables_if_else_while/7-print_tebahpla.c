#include <stdio.h>
/**
* main - determine if a number is positive, negative or zero.
* Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
