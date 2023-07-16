#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m, c;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (c = 50; c < 58; c++)
			{
				if (c > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(c);
					if (n != 55 || m != 56)
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
