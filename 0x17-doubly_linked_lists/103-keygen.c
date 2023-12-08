#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 *
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */
int f4(char *usrn, int len)
{
	int xr;
	int vxr;
	unsigned int rand_num;

	xr = *usrn;
	vxr = 0;

	while (vxr < len)
	{
		if (xr < usrn[vxr])
			xr = usrn[vxr];
		vxr += 1;
	}

	srand(xr ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - multiplies each char of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */
int f5(char *usrn, int len)
{
	int xr;
	int vxr;

	xr = vxr = 0;

	while (vxr < len)
	{
		xr = xr + usrn[vxr] * usrn[vxr];
		vxr += 1;
	}

	return (((unsigned int)xr ^ 239) & 63);
}

/**
 * f6 - generates a random char
 *
 * @usrn: username
 * Return: a random char
 */
int f6(char *usrn)
{
	int xr;
	int vxr;

	xr = vxr = 0;

	while (vxr < *usrn)
	{
		xr = rand();
		vxr += 1;
	}

	return (((unsigned int)xr ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int r, xr, vxr;
	long x[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (r = 0; argv[1][r]; r++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)x)[(r ^ 59) & 63];
	/* ----------- f2 ----------- */
	xr = vxr = 0;
	while (vxr < r)
	{
		xr = xr + argv[1][vxr];
		vxr = vxr + 1;
	}
	keygen[1] = ((char *)x)[(xr ^ 79) & 63];
	/* ----------- f3 ----------- */
	xr = 1;
	vxr = 0;
	while (vxr < r)
	{
		xr = argv[1][vxr] * xr;
		vxr = vxr + 1;
	}
	keygen[2] = ((char *)x)[(xr ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)x)[f4(argv[1], r)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)x)[f5(argv[1], r)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)x)[f6(argv[1])];
	keygen[6] = '\0';
	for (xr = 0; keygen[xr]; xr++)
		printf("%c", keygen[xr]);
	return (0);
}
