#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m, c;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			for (c = 50; c <= 58; c++)
			{
				if (c > m > n)
				{
					putchar(n);
					putchar(m);
					putchar(c);
					if (n != 56 || m != 57 || c != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
