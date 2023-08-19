#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input number
*/

void print_diagonal(int n)
{
	int diago, space;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (diago = 1; diago <= n; diago++)
		{
			for (space = 1; space <= diago; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
