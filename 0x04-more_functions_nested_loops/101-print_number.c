#include "main.h"

/**
 * pow - power number
 * @b: first input
 * @e: second input
*/

power(unsigned int b, unsigned int e)
{
	unsigned int result;

	while (e != 0)
	{
		result *= b;
		--e
	}
}

/**
 * print_number - print an integert
 * @n: input number
*/

void print_number(int n)
{
	unsigned int num = n, p = 0, i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar(48);
	else
	{
		for (i = 9; p == 0; i--)
			p = num / (power(10, i));
		i++;

		for (i=i; i != 0; i--)
		{
			p = num / (power(10, i));
			_putchar(p + 48);
		}
	}
}
