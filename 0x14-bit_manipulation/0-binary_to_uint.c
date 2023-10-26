#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int pam = 0, m;
	unsigned int par = 0, pam_bin = 0;

	if (b == NULL)
		return (pam_bin);

	while (b[pam] != '\0')
		pam++;
	pam -= 1;
	m = 0;
	while (b[m])
	{
		if ((b[m] != '0') && (b[m] != '1'))/*&& logical AND operator*/
			return (pam_bin);

		if (b[m] == '1')
			par += (1 * (1 << pam));/*<< bitwise left shift operator*/
		m++;

		pam--;
	}
	return (par);
}
