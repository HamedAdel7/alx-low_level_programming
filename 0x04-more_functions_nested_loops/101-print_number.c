#include "main.h"

/**
 * print_number - print an integert
 * @n: input number
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	_putchar((n % 10) + 48);

	if ((n / 10) > 0)
		print_number(n / 10);
}
