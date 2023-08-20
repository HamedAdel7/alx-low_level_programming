#include "main.h"

/**
 * print_number - print an integert
 * @n: input number
*/

void print_number(int n)
{
	int a, s, d, f, g;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	g = n % 10;
	n = n / 10;
	f = n % 10;
	n = n / 10;
	d = n % 10;
	n = n / 10;
	s = n % 10;
	n = n / 10;
	a = n % 10;

	if (a > 0)
	{
		_putchar(a + 48);
		_putchar(s + 48);
		_putchar(d + 48);
		_putchar(f + 48);
		_putchar(g + 48);
	}
	else if (s > 0)
	{
		_putchar(s + 48);
		_putchar(d + 48);
		_putchar(f + 48);
		_putchar(g + 48);
	}
	else if (d > 0)
	{
		_putchar(d + 48);
		_putchar(f + 48);
		_putchar(g + 48);
	}
	else if (f > 0)
	{
		_putchar(f + 48);
		_putchar(g + 48);
	}
	else
		_putchar(g + 48);
}
