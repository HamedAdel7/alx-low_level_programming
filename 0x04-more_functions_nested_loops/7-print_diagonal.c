#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input number
*/

void print_diagonal(int n)
{
	int biago;

	if (n <= 0)
		_putchar('\n');

	else if (n == 1)
	{
		_putchar(92);
		_putchar('\n');
	}
	else
	{
		for (biago = 1; biago <= (n - 1); biago++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
