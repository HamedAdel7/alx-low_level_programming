#include <stdio.h>

/**
 * primeFactors - print The prime factors
 * @n: input number
*/

void primeFactors(long int n)
{
	int i;

	while (n % 2 == 0)
		n = n / 2;

	for (i = 3; (i * i) <= n; i += 2)
	{
		while (n % i == 0)
			n = n / i;
	}

	if (n > 2)
		printf("%ld\n", n);
}

/**
 * main - Entry point
 * Return: 0
*/

int main(void)
{
	primeFactors(612852475143);
	return (0);
}
